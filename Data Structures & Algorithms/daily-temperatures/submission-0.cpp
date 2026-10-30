class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        stack<pair<int,int>> temp_stack;
        temp_stack.push(pair(temperatures[0],0));
        for(int i = 1; i < temperatures.size(); i++){
                while (!temp_stack.empty() &&
                        temperatures[i] > temp_stack.top().first){

                        pair<int,int> top = temp_stack.top();
                        temp_stack.pop();
                        result[top.second] = i - top.second;
                    }
                temp_stack.push(pair(temperatures[i],i));

              
        }


        return result;
    }
};
