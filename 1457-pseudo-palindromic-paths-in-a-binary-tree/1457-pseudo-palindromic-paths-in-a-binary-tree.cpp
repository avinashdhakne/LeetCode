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
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> freq(10,0);
        int count= 0;
        findPalindrom(root,freq,count);
        return count;
    }
    
    void findPalindrom(TreeNode *root, vector<int> &freq, int &count){
        if(!root) return;
        freq[root->val]++;
        findPalindrom(root->left, freq, count);
        findPalindrom(root->right, freq, count);
        
        if(!root->left && !root->right){
            int odd = 0;
            for(int &i: freq){
                if(i%2!=0) odd++;
            }
            if(odd<=1) count++;
        }
        freq[root->val]--;
        
    }
};