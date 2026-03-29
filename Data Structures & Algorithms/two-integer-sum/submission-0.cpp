class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = nums.size()-1;
       
        vector<int> result;
        while (j>0){
            for (int i = 0; i< j; i++){
                int sum = nums.at(i) + nums.at(j);
                if (sum == target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
               
            }


            j--;
        }
        
    }
};
