class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> string_map;
        for (const string& s : strs){
            string key = s;
            sort(key.begin(),key.end());
            string_map[key].push_back(s);
        }


        vector<vector<string>> result;
        for (auto& kv: string_map){
            result.push_back(kv.second);

        }
        return result;
    }
};
