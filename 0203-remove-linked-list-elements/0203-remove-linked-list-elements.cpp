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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * curr = head;
        ListNode * sentinal = new ListNode(0);
        sentinal->next = head;
        ListNode * prev = sentinal;
        
        while(curr!=NULL){
            if(curr->val == val)
                prev->next = curr->next;
            else
                prev = curr;
            
            curr = curr->next;
        }
        return sentinal->next;
    }
};