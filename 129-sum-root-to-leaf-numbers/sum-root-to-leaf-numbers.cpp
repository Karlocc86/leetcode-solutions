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
    int digitManager(TreeNode* node, int sum){

        if(!node) return 0;

        sum = sum * 10 + node ->val;

        if(node -> left == NULL && node -> right == NULL){
            return sum;
        }

        return digitManager(node -> left, sum) + digitManager(node -> right, sum);
    }

public:
    int sumNumbers(TreeNode* root) {
        return digitManager(root, 0);
    }
};