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
   int index=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int s,int e){
        if( s>e) return nullptr;
        TreeNode* root= new TreeNode(preorder[index]);
        int k=0;
        for(int i=s;i<=e;i++){
            if(preorder[index]==inorder[i]) {
             k=i;
                break;
            }
        }
        index++;
        root->left=build(preorder,inorder,s,k-1);
        root->right=build(preorder,inorder,k+1,e);
        return root;

        
        
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       int size=inorder.size();
         return build(preorder,inorder,0,size-1);
    }
};