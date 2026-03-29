class Solution {
public:
   

    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map <int,int> freq_map;

        for(auto &num : nums){
            freq_map[num]++;
        }
        


        std::vector<tuple<int,int>> freq_arr;

    
    
        for(auto it = freq_map.begin(); it != freq_map.end(); ++it){
            freq_arr.push_back({it->second,it->first});
        }
        std::sort(freq_arr.rbegin(),freq_arr.rend());

        std::vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(get<1>(freq_arr[i]));
        }

        return res;
    }
};