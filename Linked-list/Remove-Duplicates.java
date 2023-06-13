// problem-statement: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

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
        if(head==null || head.next ==null){
            return head;
        }
        ListNode left = head;
        ListNode right = head.next;
        int node1=left.val, node2=right.val;
        while(right!=null){
            node1=left.val;
            node2=right.val;
            if(node1==node2){
                left.next = right.next;
                right = right.next;
            }
            if(node1!=node2){
                left = left.next;
                right = right.next;
            }
        }
        return head;
    }
}
