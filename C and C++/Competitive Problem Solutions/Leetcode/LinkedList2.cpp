/*
142. Linked List Cycle II : https://leetcode.com/problems/linked-list-cycle-ii/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return NULL;
        
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *temp = head;
        
        int isCycle = 0;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                isCycle = 1;
                break;
            }
        }
        
        if(isCycle){
            
            while(temp!=slow){
                temp = temp->next;
                slow = slow->next;
            }
            return temp;
        }
        else{
            return NULL;
        }
        
        
    }
};