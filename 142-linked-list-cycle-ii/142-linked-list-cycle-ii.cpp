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
        unordered_map<ListNode*,int> cont;
        while(head!=NULL){
            if(cont.count(head) == 0){
                cont[head];
                head = head->next;
            }
            else{
                break;
            }
        }
        return head;
    }
};