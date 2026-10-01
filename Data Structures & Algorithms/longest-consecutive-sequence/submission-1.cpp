class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_map<int,int> number_map;
        for (int num:nums){
            number_map[num]++;
        }


        int longest_seq = 0;
        for(int num:nums){
            if (number_map[num-1] != 0){
                continue;
            }
            int curr_seq = 0;
            int temp_num = num;
            while(number_map[temp_num] != 0){
                temp_num++;
                curr_seq += 1;
            }
            longest_seq = max(longest_seq,curr_seq);
        }
        return longest_seq;
    }
};
