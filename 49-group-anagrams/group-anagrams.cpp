class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::vector<std::vector<string>> sol;

        std::unordered_map<string, std::vector<std::string>> lockers;

        for(string& str : strs){

            string temp = str;
            sort(str.begin() , str.end());
            lockers[str].push_back(temp);
        }

        for(auto& pair : lockers){
            sol.push_back(pair.second);
        }

        return sol;

    }
};