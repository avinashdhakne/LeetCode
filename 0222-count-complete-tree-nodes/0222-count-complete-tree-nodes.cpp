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
    void inordered(TreeNode *root, vector<int> &vect){
        if(!root)
            return;
        
        vect.push_back(root->val);
        if(root->right) inordered(root->right, vect);
        if(root->left) inordered(root->left, vect);
    }
    int countNodes(TreeNode* root) {
        vector<int> vect;
        inordered(root, vect);
        return vect.size();
    }
};