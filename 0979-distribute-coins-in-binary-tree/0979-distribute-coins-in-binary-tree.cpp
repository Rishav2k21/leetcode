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
   
          using node2 = tuple<TreeNode*, TreeNode*, bool>; // Node, parent & visited flag
    static int distributeCoins(TreeNode* root) {
        if (!root) return 0;
        vector<node2> stack = {{root, NULL, 0}};
        int moves=0;
        while (!stack.empty()) {
            auto [node, parent, visited] = stack.back();
            stack.pop_back();

            if (!visited) {
                // Mark the node as visited & repush
                stack.emplace_back(node, parent, 1);

                // Push right and left children onto the stack
                if (node->right) 
                    stack.emplace_back(node->right, node, 0);
                if (node->left) 
                    stack.emplace_back(node->left, node, 0);
            } 
            else {
                int x=node->val-1;// give x coins to parent node
                if (parent) parent->val += x; // now parent's coins
                moves+=abs(x);
            }
        }

        return moves;
    }
};