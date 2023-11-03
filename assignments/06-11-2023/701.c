class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL){
            TreeNode* temp = new TreeNode(val);
            return temp;
        } 
        
        if(val > root->val && !root->right){
            TreeNode* temp = new TreeNode(val);
            root->right = temp;
            return root;
        }
        else if(val < root->val && !root->left){
            TreeNode* temp = new TreeNode(val);
            root->left = temp;
            return root;
        }
        if(!root->left && !root->right){
            TreeNode* temp = new TreeNode(val);
            if(val > root->val) root->right = temp;
            if(val < root->val) root->left = temp;
            return root;
        }

        if(val < root->val) insertIntoBST(root->left,val);
        else if(val > root->val) insertIntoBST(root->right,val);

        return root;      
    }
};