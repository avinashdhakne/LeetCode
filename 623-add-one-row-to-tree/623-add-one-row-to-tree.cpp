class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode *t = new TreeNode(val);
            t->left = root;
            return t;
        }
        insert(root, val , depth , 1);
        return root;
        
    }
    void insert(TreeNode *root, int val , int depth , int currdepth){
        if(root == NULL) return;
        if(currdepth == depth -1){
            TreeNode * temp = root->left;
            root->left = new TreeNode(val);
            root->left->left = temp;
            temp = root->right;
            root->right = new TreeNode(val);
            root->right->right = temp;
            
        }
        else{
            insert(root->left, val , depth , currdepth+1);
            insert(root->right, val , depth, currdepth+1);
        }
        return;
    }
};