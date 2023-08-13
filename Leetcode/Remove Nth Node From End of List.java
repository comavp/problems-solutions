/*
Remove Nth Node From End of List
https://www.leetcode.com/problems/remove-nth-node-from-end-of-list
*/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if (head == null) {
            return null;
        }
        ListNode firstPtr = head;
        ListNode secondPtr = head;
        for (int i = 0; i < n && secondPtr != null; i++) {
            secondPtr = secondPtr.next;
        }
        while (secondPtr != null && secondPtr.next != null) {
            firstPtr = firstPtr.next;
            secondPtr = secondPtr.next;
        }
        if (secondPtr != null) {
            ListNode itemToRemove = firstPtr.next;
            firstPtr.next = (itemToRemove != null) ? itemToRemove.next : null;
        } else {
            head = firstPtr.next;
        }
        return head;
    }
}