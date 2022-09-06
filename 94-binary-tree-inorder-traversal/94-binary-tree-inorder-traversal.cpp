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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if(!root) return result;
        
        while(1){
            if(root){
                st.push(root);
                root = root->left;
            }
            else{
                if(st.empty()) return result;
                root = st.top();
                st.pop();
                result.push_back(root->val);
                root = root->right;
            }
        }
        return result;
    }
};