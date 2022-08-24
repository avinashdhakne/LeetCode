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
    
    struct ListNode *middle(struct ListNode *head){
        struct ListNode *fast = head, *slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    struct ListNode *revers(struct ListNode *head){
        struct ListNode *temp, *prev = NULL, *current = head;
        
        while(current != NULL){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        struct ListNode *mid = middle(head);
        struct ListNode *last = revers(mid);
        struct ListNode *current = head;
        
        while(last!=NULL){
            if(last->val != current->val){
                return false;
            }
            last = last->next;
            current = current->next;
        }
        return true;
    }
};