class Solution {
public:
    void postorder(TreeNode* node, vector<int>& post) {
        if(node == NULL) return;
        postorder(node->left, post);
        postorder(node->right, post);
        post.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> post;
        postorder(root, post);
        return post;
    }
};