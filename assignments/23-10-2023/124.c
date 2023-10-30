class Solution {
public:
    int solve(TreeNode* root,int &ans){
        if(root == NULL)return 0;
        int l = solve(root->left,ans);
        int r = solve(root->right,ans);
        ans = max({ans,root->val,root->val+max({l,r,l+r})});
        return max({root->val,root->val+max({l,r})});
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        return max(ans,solve(root,ans));
        
    }
};