// Problem Statement: https://leetcode.com/problems/reverse-linked-list/

// Given the head of a singly linked list, reverse the list, and return the reversed list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }

        ListNode* current=head;
        ListNode* previous=NULL;

        while(current!=NULL){
            ListNode* temp = current->next;
            current->next=previous;
            previous=current;
            current=temp;
        }
        
        return previous;
    }
};
