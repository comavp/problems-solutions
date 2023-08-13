/*
Remove Duplicates from Sorted List
https://www.leetcode.com/problems/remove-duplicates-from-sorted-list
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
    public ListNode deleteDuplicates(ListNode head) {
        ListNode result = new ListNode(-1, head);
        while (head != null && head.next != null) {
            while (head.next!= null && head.val == head.next.val) {
                head.next = head.next.next;
            }
            head = head.next;
        }
        return result.next;
    }
}