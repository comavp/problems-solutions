/*
Reverse Linked List
https://www.leetcode.com/problems/reverse-linked-list
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
    public ListNode reverseList(ListNode head) {
        if (head == null) {
            return null;
        }
        Stack<ListNode> list = new Stack<>();
        while (head != null) {
            list.add(head);
            head = head.next;
        }
        head = list.pop();
        ListNode tmp = head;
        while (!list.isEmpty()) {
            ListNode currentNode = list.pop();
            tmp.next = currentNode;
            tmp = currentNode;
            if (list.isEmpty()) {
                currentNode.next = null;
            }
        }
        return head;
    }
}