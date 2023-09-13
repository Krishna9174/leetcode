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
void check(TreeNode* root, int &num){
    if(root==NULL){
        num++;
        return;
    }
     check(root->left,num);
      check(root->right,num);

}
    int countNodes(TreeNode* root) {
        int num=0;
        if(root==NULL) return num;
        check(root, num);
        return num-1;
    }
};