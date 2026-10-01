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

    int helper(TreeNode* node, int maxSeen){
        if(!node) return 0;

        return (node -> val >= maxSeen) ? (helper(node->left, max(maxSeen, node -> val)) + helper(node->right,max(maxSeen, node -> val)) + 1) : (helper(node->left, max(maxSeen, node -> val)) + helper(node->right, max(maxSeen, node -> val)));
        
    }
public:
    int goodNodes(TreeNode* root) {

        return helper(root, INT_MIN);
    
    }
};