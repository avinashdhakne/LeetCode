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
    
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LONG_MAX, LONG_MIN);
    }
    
    bool isValidBST(TreeNode *root, long max, long min){
        if(root == NULL){
            return true;
        }
        if(root->val >= max || root->val <= min){
            return false;
        }
        return (isValidBST(root->left,root->val,min) && isValidBST(root->right, max, root->val));
    }
};