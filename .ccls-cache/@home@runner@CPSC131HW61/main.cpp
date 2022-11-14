class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        //Returns null if val can't be found
        if (root == NULL) {
            return NULL;
        }

        //Searches the left subtree if val is less than the value of root
        if (val < root->val) {
            return searchBST(root->left, val);
        }

        //Searches the right subtree if val is greater than the value of root
        else if (val > root->val){
            return searchBST(root->right, val);
        }

        //Otherwise val is found, returns root
        else {
            return root;
        }
    }
};