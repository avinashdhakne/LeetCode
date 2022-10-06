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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy = new ListNode;
        dummy->next = head;
        
        ListNode * temp = dummy;
        temp->next = head;
        int length = 0;
        while(temp->next!=NULL){
            temp = temp->next;
            length++;
        }
        
        cout<<length;
        int nodeIndex = length - n;
        ListNode * iter = dummy;
        iter->next = head;
        for(int i=0; i<nodeIndex; i++)
            iter = iter -> next; 
           
        
        cout<<iter->val;
        iter->next = iter->next->next;
        
        return dummy->next;
    }
};