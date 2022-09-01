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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = l1;
        int addCurr = 0, addNext = 0; int result;
        while(temp!=NULL && l2!=NULL) {
          
                // cout<<"temp: "<<temp->val<<" l2: "<<l2->val<<" addnext: "<<addNext<<endl;
                result = temp->val + l2->val + addNext;
                temp->val = result % 10;
                // cout<<"new temp: "<<temp->val<<endl;

                if(result >= 10) {
                    addNext = 1;
                    // cout<<"added now:"<<endl;
                }
                else 
                    addNext = 0;
                // cout<<"----------------------------"<<endl;
            
            
            if(temp->next == NULL && l2->next!=NULL){
                cout<<"temp: "<<endl;
                l2 = l2->next;
                
                while(l2!=NULL){
                    result = l2->val + addNext;
                    cout<<"Result: "<<result%10<<endl;
                    ListNode * newNode = new ListNode(result%10);
                    temp->next = newNode;
                    if(result >= 10) {
                        cout<<"yes";
                        addNext = 1;  
                    }    
                    else 
                        addNext = 0;
                    if(l2->next == NULL && addNext == 1){
                        temp = temp->next;
                        ListNode *remainder = new ListNode(1);
                        temp->next = remainder;
                        break;
                    }
                    else{
                        temp = temp->next;
                        l2 = l2->next;
                    }
                }
                break;

            }
            
            if(l2->next==NULL && temp->next!=NULL){
                cout<<"l2"<<endl;
                temp = temp->next;

                while(temp!=NULL){
                    cout<<"temp: "<<temp->val<<" ";
                    result = temp->val + addNext;
                    cout<<"Result: "<<result<<endl;

                    temp->val = result%10;
                    if(result >= 10) 
                        addNext = 1;
                    else 
                        addNext = 0;
                    if(temp->next == NULL && addNext == 1){
                        ListNode *remainder = new ListNode(1);
                        temp->next = remainder;
                        break;
                    }
                    else{
                        temp = temp->next;
                    }
                }
                
                break;
            }
            
           if(temp->next == NULL && addNext == 1){
                ListNode *remainder = new ListNode(1);
                temp->next = remainder;
                    break;
            }
            else{
                temp = temp->next;
                l2 = l2->next;
            }  
        }
        
       
        return l1;
    }
};