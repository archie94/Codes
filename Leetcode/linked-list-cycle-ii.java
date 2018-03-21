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

// https://leetcode.com/problems/linked-list-cycle-ii/description/

public class Solution {
    public ListNode detectCycle(ListNode head) {
        if (head == null || head.next == null) return null;
        
        ListNode fh = head;
        ListNode sh = head;
        if (fh.next == sh) return sh;
        
        while (fh != null && fh.next != null) {
            fh = fh.next.next;
            sh = sh.next;
            if (fh == sh) break;
        }
        
        if (fh == null || fh.next == null) return null;
        
        sh = head;
        while (sh != fh) {
            sh = sh.next;
            fh = fh.next;
        }
        
        return fh;
    }
}