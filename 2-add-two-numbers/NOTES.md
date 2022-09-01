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
​
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
```