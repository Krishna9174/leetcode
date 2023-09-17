/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *    long long val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool validet(TreeNode* root, long long minVal, long long maxVal) {
        if (root == nullptr) {
            return true;
        }

        if (root->val <= minVal || root->val >= maxVal) {
            return false;
        }

        // Check left subtree with updated maximum value (maxVal) and right subtree
        // with updated minimum value (minVal).
        return validet(root->left, minVal, root->val) && validet(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        // Initially, pass negative infinity as minVal and positive infinity as maxVal.
        return validet(root, LLONG_MIN, LLONG_MAX);
    }
};
