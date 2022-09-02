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
        unordered_set<ListNode*> cont;
        while(head!=NULL){
            if(cont.find(head) == cont.end()){
                cont.insert(head);
                head = head->next;
            }
            else{
                break;
            }
        }
        return head;
    }
};