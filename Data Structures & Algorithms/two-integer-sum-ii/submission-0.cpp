class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;

        int input_length = numbers.size();
        int l = 1;
        int r = input_length;

        while(l < r){
            if(numbers[l-1] + numbers[r-1] == target){
                break;
            } else if (numbers[l-1] + numbers[r-1] > target){
                r--;
                continue;
            } else {
                l++;
            }


        }

        res.push_back(l);
        res.push_back(r);
        return res;
    }
    
};
