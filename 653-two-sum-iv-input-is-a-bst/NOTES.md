/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode() : val(0), left(nullptr), right(nullptr) {}
*     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
*     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
* };
*/
```
class Solution {
public:
void visiteNode(TreeNode *root, vector<int> &result){
if(!root) return;
visiteNode(root->left,result);
result.push_back(root->val);
visiteNode(root->right,result);
}
bool findTarget(TreeNode* root, int target) {
vector<int> result;
visiteNode(root,result);
int start = 0;
int end = result.size()-1;
while(start<end){
if((result[start]+result[end]) > target)
end--;
else if((result[start]+result[end]) < target)
start++;
else{
return true;
}
}
return false;
}
};
```