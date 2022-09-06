***Recursive approch:***
```
class Solution {
public:
vector<int> result;
vector<int> preorder(Node* root) {
if(root==NULL) return result;
preorderHelper(root, result);
return result;
}
void preorderHelper(Node* root, vector<int> &result){
if(root==NULL) return;
result.push_back(root->val);
for(auto &child: root->children){
preorderHelper(child, result);
}
}
};
```