class Solution {
public:

    bool ans;

    int getHt(TreeNode* root){
        if(!root) return 0;
        int lst = getHt(root->left);
        int rst = getHt(root->right);
        if(abs(lst-rst) > 1) ans = false;
        return 1 + max(lst, rst);

    }
    bool isBalanced(TreeNode* root) {
        ans = true;
        getHt(root);
        return ans;
    }
};