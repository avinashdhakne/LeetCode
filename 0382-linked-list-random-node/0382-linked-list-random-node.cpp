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
    
    int len = 0;
    ListNode * start = NULL;
    ListNode * temp = NULL;
    Solution(ListNode* head) {
        start = head;
        while(head){
            head = head->next;
            len++;
        }
        // cout<<len;
    }
    
    int getRandom() {
        temp = start;
        int index = rand() % len;
        for(int i=0; i<index; i++){
            temp = temp->next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */