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
    int result = 0;
    int ans = 0;
    int sumNumbers(TreeNode* root) {
        find(root);
        return ans;
    }
    
    void find(TreeNode * root){
        if(!root){
            return;
        }
        result = result * 10 + root->val;
        sumNumbers(root->left);
        sumNumbers(root->right);
        
        if(!root->right && !root->left){
            cout<<result<<endl;
            ans += result;
        }
        result = result / 10;
    }
};