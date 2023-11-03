class Solution {
public:
    TreeNode* build (vector<int>& preorder, vector<int>& inorder, unordered_map<int, int> &map, int i, int j, int m, int n) {
        if (i>j) return nullptr;
        int val = preorder[i];
        int idx = map[val];
        TreeNode* root = new TreeNode (val);
        root->left = build (preorder, inorder, map, i+1, i+idx-m, m, idx-1);
        root->right = build (preorder, inorder,map, i+idx-m+1, j, idx+1, n);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder = preorder;
        int n = preorder.size();
        if (!n) return nullptr;
        sort(inorder.begin(), inorder.end());
        unordered_map<int, int> map;
        for (int i=0; i<n; i++) map[inorder[i]] = i;
        return build (preorder, inorder, map, 0, n-1, 0, n-1);
    }
};