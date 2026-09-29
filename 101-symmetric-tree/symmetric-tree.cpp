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


private: 

    bool treeCheck(TreeNode* lefty, TreeNode* righty){

        if(!lefty && !righty) return true;
        if(!lefty || !righty) return false;

        if(lefty -> val != righty -> val) return false;

        return treeCheck(lefty -> left, righty -> right) && treeCheck(lefty -> right, righty -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {

        return treeCheck(root->left, root -> right);
    }
};