/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        int ans = 0;
        if(root==NULL){return ans;}
        isgood(root, ans, root->val);
        return ans;
    }
    
    void isgood(TreeNode *root, int &ans, int max){
        if(root == NULL){
            return;
        }
        if(root->val >= max){
            ans++;
            max = root->val;
        }
        isgood(root->left, ans, max);
        isgood(root->right, ans, max);
    }
};