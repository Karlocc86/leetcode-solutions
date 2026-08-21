class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        std::unordered_set<int> s;

        for( int x : nums){

            if(s.count(x) != 1){
                s.insert(x);
            }
            else{
                return true;;
            }

        }
        
        return false;
    }
};