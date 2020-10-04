/*
234. Palindrome Linked List: https://leetcode.com/problems/palindrome-linked-list/
*/

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
    
    ListNode* reverse(ListNode *node){
        ListNode* prev = NULL;
        ListNode* curr = node;
        ListNode* after;
        
        while(curr){
            after = curr->next;
            curr->next = prev;
            prev = curr;
            curr = after;
        }
        return prev;
    }
    
    ListNode* findMiddle(ListNode *node){
        ListNode* fast = node;
        ListNode* slow = node;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next)
            return 1;
        
        ListNode* middle = findMiddle(head);
        middle = reverse(middle);
        ListNode* temp = head;
        
        while(middle){
            if(temp->val != middle->val){
                return 0;
            }
            temp = temp->next;
            middle = middle->next;
        }
        return 1;
    }
};