/*
Remove Linked List Elements
https://www.leetcode.com/problems/remove-linked-list-elements
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
    public ListNode removeElements(ListNode head, int val) {
        ListNode ptr = head;
        ListNode prev = null;
        while (ptr != null) {
            if (ptr.val == val) {
                if (prev != null) {
                    prev.next = ptr.next;
                } else {
                    head = ptr.next;
                }
            } else {
                prev = ptr;
            }
            ptr = ptr.next;
        }
        return head;
    }
}