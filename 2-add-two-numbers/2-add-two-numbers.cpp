class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *temp = new ListNode();
        ListNode *iter = temp;
        int carry = 0;
        while (l1 != NULL || l2 != NULL || carry) {
            int sum = 0;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            ListNode *node = new ListNode(sum % 10);
            iter->next = node;
            carry = sum / 10;
            iter = iter->next;
        }
        return temp->next;
    }
};