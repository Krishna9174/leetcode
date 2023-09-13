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
void check(TreeNode * root,bool &flag, int value){
  
    if(root==NULL) return ;
    if(root->val!=value) flag=false;
 check(root->left,flag, value);
 check(root->right,flag, value);
   

}
    bool isUnivalTree(TreeNode* root) {
        int value=root->val;
        bool flag=true;
        check(root,flag, value);
        return flag;
    }
};