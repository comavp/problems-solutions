/*
Print Zero Even Odd
https://www.leetcode.com/problems/print-zero-even-odd
*/

class ZeroEvenOdd {
    private int n;

    private volatile int cnt = 1;

    final Object evenLock = new Object();
    final Object oddLock = new Object();
    final Object zeroLock = new Object();

    public ZeroEvenOdd(int n) {
        this.n = n;
    }

    // printNumber.accept(x) outputs "x", where x is an integer.
    public void zero(IntConsumer printNumber) throws InterruptedException {
        while (cnt <= n) {
            synchronized (zeroLock) {
                printNumber.accept(0);
                synchronized (evenLock) {
                    if (cnt % 2 == 0) {
                        evenLock.notify();
                    }
                }
                synchronized (oddLock) {
                    if (cnt % 2 != 0) {
                        oddLock.notify();
                    }
                }
                zeroLock.wait();
            }
        }
        synchronized (evenLock) {
            if (cnt % 2 == 0) {
                evenLock.notify();
            }
        }
        synchronized (oddLock) {
            if (cnt % 2 != 0) {
                oddLock.notify();
            }
        }
    }

    public void even(IntConsumer printNumber) throws InterruptedException {
        while (cnt <= n) {
            synchronized (evenLock) {
                while (cnt % 2 != 0) {
                    evenLock.wait();
                }
            }

            synchronized (zeroLock) {
                if (cnt <= n) {
                    printNumber.accept(cnt);
                    cnt++;
                    zeroLock.notify();
                }
            }
        }
    }

    public void odd(IntConsumer printNumber) throws InterruptedException {
        while (cnt <= n) {
            synchronized (oddLock) {
                while (cnt % 2 == 0) {
                    oddLock.wait();
                }
            }

            synchronized (zeroLock) {
                if (cnt <= n) {
                    printNumber.accept(cnt);
                    cnt++;
                    zeroLock.notify();
                }
            }
        }
    }
}