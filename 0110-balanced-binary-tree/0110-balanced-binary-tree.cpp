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
pair<bool, int> Balanced(TreeNode* root){
    if(root==NULL){
        pair<bool, int> p=make_pair(true, 0);
        return p;
    }
      pair<bool, int> left=Balanced( root->left);
      pair<bool, int> right=Balanced( root->right);
      bool leftans=left.first;
       bool rightans=right.first;
      bool diff=abs(left.second - right.second)<=1;

        pair<bool, int> ans;
        ans.second=max(left.second, right.second)+1;
        if(leftans && rightans && diff) ans.first=true;
        else ans.first=false;
        return ans;
    
}
    bool isBalanced(TreeNode* root) {
        return Balanced(root).first;

    }
};


// class Solution {

// public:
// int height(TreeNode* root){
//     if(root==NULL) return 0;
//     int opt1=height(root->left);
//     int opt2=height(root->right);
//     int ans=max(opt1, opt2)+1;
//     return ans;
// }

//     bool isBalanced(TreeNode* root) {
//         if(root==NULL){
//             return true;
//         }
//         int opt1=isBalanced(root->left);
//         int opt2=isBalanced(root->right);
//         int opt3=abs(height(root->left)- height(root->right))<=1;
//         if(opt1 && opt2 && opt3)  return true;
//         return false;

//     }
// };