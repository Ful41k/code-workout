class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int match = 0, flag = 1;
        string uxt = ""; // first string 
        if(strs.size() == 0) {
            return uxt;
        }
        uxt = strs.at(0);
        for(int j=1; j < strs.size() ; j++) {
            while(strs.at(j).find(uxt) != 0) {
                uxt = uxt.substr(0, uxt.length() - 1);
                if(uxt.empty()) return "";
            }
        }
        return uxt;
        }
};