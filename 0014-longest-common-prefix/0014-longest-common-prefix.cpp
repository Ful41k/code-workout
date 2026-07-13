class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int match = 0, flag = 1;
        string uxt = ""; // first string 
        int equal = strs.size() - 1; // 2
        int lowest= strs[0].length(); 

        for(int u=1; u < strs.size(); u++) {
            int temp = strs[u].length();
            if(lowest > temp) {
                lowest = temp;
            }
        } // found the lowest length
        // if size is only 1
        if(strs.size() < 2) {
            uxt = strs.at(0);
            return uxt;
        }
        string abc = strs.at(0); // "cir"
        string abc2; // ""
        // if size is only 2
        if(strs.size() > 1 && strs.size() < 3) {   
                    for(int j=1; j < 2; j++) {  // comparing each string with initial one
                        for(int k=0;k < lowest;k++) { // lowest = 3
                            if(abc.at(k) == strs.at(j).at(k)) {
                                match++;
                                flag++;
                            }
                            if(k == 0  && abc.at(k) != strs.at(j).at(k)) {
                                return abc2;
                            }
                             if(flag >= 2 && abc.at(k) != strs.at(j).at(k)) {
                                return abc2;
                            }
                            if(match == 1) {
                                abc2.push_back(strs.at(j).at(k));
                                match = 0;
                            }
                        }
                        abc = abc2;
                        //lowest = abc.length();
                        abc2.clear(); 
                }
            uxt = abc;
            return uxt;
        }
         if(strs.size() > 2) {
                    for(int j=1; j < strs.size(); j++) {  // 1 till 3 (2 oper)
                        for(int k=0;k < lowest;k++) { 
                            if(abc.at(k) == strs.at(j).at(k)) {
                                match++;
                                flag++;
                            }
                            if(k == 0  && abc.at(k) != strs.at(j).at(k)) {
                                return abc2;
                            }
                            if(flag >= 2 && abc.at(k)  != strs.at(j).at(k)) {
                                flag = 1;
                                continue;
                            }
                        if(match == 1) {
                            abc2.push_back(strs.at(j).at(k));
                            match = 0;
                        }
                        }
                        abc = abc2;
                        lowest = abc.length();
                        abc2.clear(); 
                    }
                    uxt = abc;
         }
        return uxt;
    }
};