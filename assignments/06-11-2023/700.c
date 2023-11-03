class Solution {
public:
    TreeNode* ans = NULL;
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        else if(root->val > val){
            ans = searchBST(root->left,val);
        }
        else{
            ans = searchBST(root->right,val);
        }
        return ans;
    }
};