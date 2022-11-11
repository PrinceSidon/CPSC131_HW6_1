class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> solution;
        inorderTraversalHelper(root, solution);
        return solution;
    }

    void inorderTraversalHelper(TreeNode* root, vector<int> &tree) {
        if (root != NULL) {
            inorderTraversalHelper(root->left, tree);
            tree.push_back(root->val);
            inorderTraversalHelper(root->right, tree);
        }
    }
};