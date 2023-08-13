/*
Linked List Cycle
https://www.leetcode.com/problems/linked-list-cycle
*/

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if (head == null || head.next == null) {
            return false;
        }
        ListNode secondPtr = head.next;
        int n = 2;
        while (head != secondPtr) {
            for (int i = 0; i < n; i++) {
                secondPtr = secondPtr.next;
                if (secondPtr == null) {
                    return false;
                }
                if (secondPtr == head) {
                    return true;
                }
            }
            head = head.next;
            n++;
        }
        return true;
    }
}