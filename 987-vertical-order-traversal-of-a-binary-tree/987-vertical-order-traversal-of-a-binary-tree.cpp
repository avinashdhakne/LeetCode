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
    void helper(TreeNode* root,int l,int w,map<int,vector<pair<int,int>>>&res){
    if(!root)return;
        res[w].push_back({l,root->val});
        if(root->left)
            helper(root->left,l+1,w-1,res);
        if(root->right)
            helper(root->right,l+1,w+1,res);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root)return {};
        map<int,vector<pair<int,int>>>res;
        helper(root,0,0,res);
        vector<vector<int>>ans;
        for(auto &el : res){
            sort(el.second.begin(),el.second.end());
            vector<int>tmp;
            for(int i=0; i< el.second.size(); i++){
                tmp.push_back(el.second[i].second);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};