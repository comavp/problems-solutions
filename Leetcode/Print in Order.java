/*
Print in Order
https://www.leetcode.com/problems/print-in-order
*/

class Foo {

    public Foo() {
        
    }
    
    volatile boolean secondStart = false;
    volatile boolean thirdStart = false;

    public void first(Runnable printFirst) throws InterruptedException {
        
        // printFirst.run() outputs "first". Do not change or remove this line.
        printFirst.run();
        
        secondStart = true;
    }

    public void second(Runnable printSecond) throws InterruptedException {
        
        while (!secondStart) Thread.onSpinWait();
        
        // printSecond.run() outputs "second". Do not change or remove this line.
        printSecond.run();
        
        thirdStart = true;
    }

    public void third(Runnable printThird) throws InterruptedException {
        
        while(!thirdStart) Thread.onSpinWait();
        
        // printThird.run() outputs "third". Do not change or remove this line.
        printThird.run();
    }
}