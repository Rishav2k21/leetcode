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
    bool inorder(TreeNode * root){
        
    if(root->val==0)return 0;
    if(root->val==1)return 1;
    if(root->val==2) return inorder(root->left) || inorder(root->right);
    else if(root->val==3) return inorder(root->left) && inorder(root->right); 
        return 0;
    }
    bool evaluateTree(TreeNode* root) {
     return  inorder(root);
        
    }
};