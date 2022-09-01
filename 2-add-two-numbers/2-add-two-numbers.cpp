class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *temp = l1;
        int addCurr = 0, addNext = 0;
        int result;
        while (temp != NULL && l2 != NULL) {
            result = temp->val + l2->val + addNext;
            temp->val = result % 10;

            if (result >= 10)   addNext = 1;
            else    addNext = 0;

            if (temp->next == NULL && l2->next != NULL) {
                cout << "temp: " << endl;
                l2 = l2->next;

                while (l2 != NULL) {
                    result = l2->val + addNext;
                    ListNode *newNode = new ListNode(result % 10);

                    temp->next = newNode;
                    if (result >= 10) addNext = 1;
                    else addNext = 0;

                    if (l2->next == NULL && addNext == 1) {
                        temp = temp->next;
                        ListNode *remainder = new ListNode(1);
                        temp->next = remainder;
                        break;
                    }
                    else {
                        temp = temp->next;
                        l2 = l2->next;
                    }
                }
                break;
            }

            if (l2->next == NULL && temp->next != NULL) {
                temp = temp->next;

                while (temp != NULL) {
                    result = temp->val + addNext;
                    temp->val = result % 10;
                    if (result >= 10) addNext = 1;
                    else addNext = 0;
                    if (temp->next == NULL && addNext == 1) {
                        ListNode *remainder = new ListNode(1);
                        temp->next = remainder;
                        break;
                    }
                    else temp = temp->next; 
                }
                break;
            }

            if (temp->next == NULL && addNext == 1) {
                ListNode *remainder = new ListNode(1);
                temp->next = remainder;
                break;
            }
            else {
                temp = temp->next;
                l2 = l2->next;
            }
        }
        return l1;
    }
};