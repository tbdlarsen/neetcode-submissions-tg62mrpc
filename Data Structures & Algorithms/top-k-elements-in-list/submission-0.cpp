class Solution {
public:
    static bool comp(pair<int, int> &a, pair<int,int> &b){
        return b.second < a.second;
    }

    vector<pair<int,int>> sortMap(unordered_map<int,int>& mp){
        vector<pair<int,int>> pr;
        for(auto &kv : mp){
            pr.push_back(kv);
        }
        sort(pr.begin(), pr.end(), comp);
        return pr;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map <int,int> freq_map;

        for(auto &num : nums){
            freq_map[num]++;
        }
        vector<pair<int,int>> sorted_pairs = sortMap(freq_map);

        std::vector<int> result;
        
        int cnt = k;
        for(auto it = sorted_pairs.begin(); it != sorted_pairs.end(); ++it){
            if(cnt == 0){
                return result;
            }
            result.push_back(it->first);
            cnt--;
        }
        return result;
    }
};