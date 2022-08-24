class Solution {
public:
     TreeNode* helper(vector<int>& nums, int low, int high) {
        while(low<=high) {
             int mid=low+(high-low)/2;
             TreeNode *root=new TreeNode(nums[mid]);
             root->left=helper(nums,low,mid-1); //values lower than root will be added towards the left of the root.
             root->right=helper(nums,mid+1,high); //values higher than root will be added towards the right of the root.
             return root;
         }
         return NULL;
     }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        return helper(nums,low,high);        
    }
};