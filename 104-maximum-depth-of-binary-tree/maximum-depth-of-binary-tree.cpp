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
    int maxDepth(TreeNode* root) {

        int maxD = maxDep(root, 0);

        return maxD;


        
    }

private:

    int maxDep(TreeNode* node , int height){

        if(node== nullptr) return height;

        height++;

        return max(maxDep(node -> left, height), maxDep(node -> right, height));

    }

   

    
    
};