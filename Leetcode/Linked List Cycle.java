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
        ListNode tortoise = head;
        while (tortoise.next != null && tortoise.next.next != null) {
            head = head.next;
            tortoise = tortoise.next.next;
            if (head == tortoise) {
                return true;
            }
        }
        return false;
    }
}