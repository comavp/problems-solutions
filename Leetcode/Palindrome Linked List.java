/*
Palindrome Linked List
https://www.leetcode.com/problems/palindrome-linked-list
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
    public boolean isPalindrome(ListNode head) {
        if (head == null) {
            return false;
        }
        ListNode middle = head;
        ListNode tail = head;
        while (tail != null && tail.next != null) {
            middle = middle.next;
            tail = tail.next.next;
        }
        tail = middle;
        ListNode prev = null;
        while (tail != null) {
            ListNode next = tail.next;
            tail.next = prev;
            prev = tail;
            tail = next;
        }
        tail = prev;
        prev = null;
        while (head != middle) {
            if (head.val != tail.val) {
                return false;
            }
            head = head.next;

            ListNode next = tail.next;
            tail.next = prev;
            prev = tail;
            tail = next;
        }
        head.next = prev == head ? prev.next : prev;
        return true;
    }
}