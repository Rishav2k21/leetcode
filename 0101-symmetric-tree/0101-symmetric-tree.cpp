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
     bool is(TreeNode* left,TreeNode* right){
        if(left==nullptr && right==nullptr) return true;
        if(left==nullptr || right==nullptr) return false;
        bool lefty=is(left->left,right->right);
        bool righty=is(left->right,right->left);
        bool vall=left->val==right->val;
        if(lefty && righty&& vall) return true;
        return false;
         
    }
    bool isSymmetric(TreeNode* root) {
        
      return  is(root->left , root->right);
        
    }
};