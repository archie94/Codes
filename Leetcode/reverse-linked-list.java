/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */

// https://leetcode.com/problems/reverse-linked-list/description/

class Solution {
    public ListNode reverseList(ListNode head) {
        if (head == null) return head;
        ListNode p = null;
        while (head.next != null) {
            ListNode t = head.next;
            head.next = p;
            p = head;
            head = t;
        }
        
        head.next = p;
        return head;
    }
}