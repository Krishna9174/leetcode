/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

public:
int height(TreeNode* root){
    if(root==NULL) return 0;
    int opt1=height(root->left);
    int opt2=height(root->right);
    int ans=max(opt1, opt2)+1;
    return ans;
}

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int opt1=isBalanced(root->left);
        int opt2=isBalanced(root->right);
        int opt3=abs(height(root->left)- height(root->right))<=1;
        if(opt1 && opt2 && opt3)  return true;
        return false;

    }
};