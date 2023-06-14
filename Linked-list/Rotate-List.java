// Problem Statement: https://leetcode.com/problems/rotate-list/description/
// Given the head of a linked list, rotate the list to the right by k places.
  
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
    public ListNode rotateRight(ListNode head, int k) {
      if(head==null || k==0){
          return head;
      }
      ListNode temp = head;
      int count=0;
      while(temp.next!=null){
          temp = temp.next;
          count = count+1;
      }
      count++;
      temp.next=head;
      int rotatePoint = count - k%count;
      temp = head;
      while(rotatePoint-->1){
          temp = temp.next;
      }
      head = temp.next;
      temp.next = null;
      return head;
    }
    
}
