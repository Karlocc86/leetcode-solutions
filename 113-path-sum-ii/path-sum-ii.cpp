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

    void backtrack(TreeNode* node, int targetSum, vector<vector<int>>& solution, vector<int>& path){

        if(!node) return;

        path.push_back(node -> val);
        int remain = targetSum - node -> val;

        if(!node->left && !node->right && remain == 0){
            solution.push_back(path);

        }else{
            
            backtrack(node-> left , remain, solution, path);
            backtrack(node-> right , remain, solution, path);

        }
        path.pop_back();
    }


public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> solution;
        vector<int> path;

        backtrack(root, targetSum, solution, path);

        return solution;
        
    }
};