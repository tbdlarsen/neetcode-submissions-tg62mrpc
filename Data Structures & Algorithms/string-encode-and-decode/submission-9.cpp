#include <string.h>
class Solution {
public:
    string encode(vector<string>& strs) {
        string res;
        int curr_len;
        for (string s: strs) {
            curr_len = s.length();
            res.append("#");
            res.append(to_string(curr_len));
            res.append(":");
            res.append(s);

        }
        return res;


    }

    vector<string> decode(string s) {

        vector<string> strs;
        const string numbers = "0123456789";
        int idx = 0;
        while(idx < s.length()){
            if(s[idx] != '#'){
                idx++;
                continue;
            }
            idx++;
            string tempstring;
            int curr_len = 0;
            
            while(idx < s.length() && numbers.find(s[idx]) != string::npos){
                curr_len *= 10;
                curr_len += (s[idx] - '0');
                idx++;
            }
            idx++;
            tempstring = s.substr(idx, curr_len);
            strs.push_back(tempstring);
            idx+= curr_len;
        }


        return strs;
    }
};
