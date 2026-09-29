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

    TreeNode* buildBST(int left , int right, vector<int>& nums){

        if(left > right){
            return nullptr;
        }

        int mid = left + (right - left)/2;
        TreeNode* root = new TreeNode(nums[mid]);

        root ->right = buildBST(mid + 1, right, nums);
        root ->left = buildBST(left, mid - 1, nums);
        

        return root;







    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return (buildBST(0 , nums.size() - 1, nums));
    }
};