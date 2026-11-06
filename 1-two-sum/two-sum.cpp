#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::unordered_map<int,int> complements;

        for(int i = 0 ; i < nums.size() ; i++){

            int complement = target - nums[i];

            if(complements.count(complement)){

                return {i , complements[complement]};
            } 

            complements[nums[i]] = i;
            
        }

        return {};

       
    }
};