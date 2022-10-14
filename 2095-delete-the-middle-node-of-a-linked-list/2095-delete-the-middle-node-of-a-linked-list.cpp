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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * result = new ListNode(0);
        result->next = head;
        
        if(head->next == NULL){
            return head->next;
        }
        
        ListNode *fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            result = result->next;
            fast = fast->next;
            fast = fast->next;
        }
        
        result->next = result->next->next;
        
        return head;
    }
};