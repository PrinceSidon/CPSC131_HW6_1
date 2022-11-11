class Solution {
public:
    //Returns a vector with all BST values in order
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> solution;
        inorderTraversalHelper(root, solution);
        return solution;
    }

    //Helper function for inorderTraversal
    void inorderTraversalHelper(TreeNode* root, vector<int> &tree) {
        if (root != NULL) {
            //Checks the left subtree
            inorderTraversalHelper(root->left, tree);

            //Adds the values to the vector
            tree.push_back(root->val);

            //Checks the right subtree
            inorderTraversalHelper(root->right, tree);
        }
    }
};