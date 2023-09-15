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
void creatingmap(map<int, int> &mpp, vector<int>& inorder){
   for(int i=0; i<inorder.size(); i++){
       mpp[inorder[i]]=i;
   }
}
TreeNode* solve(vector<int> inorder, vector<int> postorder,  int &index, int inorderstart, int inorderend, int n, map<int, int> &mpp){
    if(index <0 || inorderstart>inorderend){
        return NULL;}
        int element=postorder[index--];
        TreeNode* root=new TreeNode(element);
        int position=mpp[element];
        root->right=solve(inorder, postorder,index,position+1,inorderend, n, mpp);
        root->left=solve( inorder,postorder,index,inorderstart,position-1, n, mpp);
           return root;

}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int postorderindex=n-1;
        map<int, int> mpp;
        creatingmap(mpp, inorder);
        TreeNode* ans=solve(inorder,postorder, postorderindex, 0, n-1, n, mpp);
        return ans;
    }
};