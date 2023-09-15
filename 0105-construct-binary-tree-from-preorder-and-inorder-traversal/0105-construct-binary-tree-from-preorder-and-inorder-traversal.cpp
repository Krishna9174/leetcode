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
int findinorder(vector<int> inorder, int n, int element){
    for(int i=0; i<n; i++){
    if(inorder[i]==element) return i;
    } return -1;
}
TreeNode* solve(vector<int> preorder, vector<int> inorder, int &index, int inorderstart, int inorderend, int n){
    if(index >=n || inorderstart>inorderend){
        return NULL;}
        int element=preorder[index++];
        TreeNode* root=new TreeNode(element);
        int position=findinorder(inorder, n, element);
        root->left=solve( preorder,inorder,index,inorderstart,position-1, n);
        root->right=solve( preorder,inorder,index,position+1,inorderend, n);
           return root;

}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex=0;
        int n=preorder.size();
        TreeNode* ans=solve(preorder, inorder, preorderindex, 0, n-1, n);
        return ans;
    }
};