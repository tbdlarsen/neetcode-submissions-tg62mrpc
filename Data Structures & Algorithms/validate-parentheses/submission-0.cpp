class Solution {
public:


    bool isValid(string s) {
        vector<char> stack_a;
        char last_element;

        for (char c: s){
            if(!stack_a.empty()){
                last_element = stack_a.back();
            } else {
                last_element = '0';
            }

            switch(c){
                case('}'): {
                    if (last_element == '{'){
                        stack_a.pop_back();
                        break;
                    } else{
                        return false;
                    }
                }
                case(']'): {
                    if (last_element == '['){
                        stack_a.pop_back();
                        break;
                    } else{
                        return false;
                    }
                }
                case(')'):{
                    if (last_element == '('){
                        stack_a.pop_back();
                        break;
                    } else{
                        return false;
                    }
                }
                default: {
                    stack_a.push_back(c);
                }

            }
        }  
        return stack_a.size() == 0;
        
    }
};
