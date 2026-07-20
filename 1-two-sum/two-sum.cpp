#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        std::unordered_map<int,int> mp;

        for( int i= 0 ; i < nums.size() ; ++i ){
            int complemento = target - nums[i];

            if(mp.count(complemento)==1 ){
                return{i , mp[complemento]};
            }
            else{
                mp[nums[i]]=i;
            }
        }

        return {};

    }
};