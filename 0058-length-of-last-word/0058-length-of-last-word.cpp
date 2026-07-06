class Solution {
public:
    // s = "Hello World"
    // space is 32

    //  if it hits 
    //
    // 
    int lengthOfLastWord(string s) {
        int last = s.length() - 1;
        int count =0;
        // if last char is space
        if(s.at(last) == ' ') {
            for(int p=last; p>=0 ;p--) {
                if(s.at(p) != ' ') { // stops at 'n'
                    for(int d=p; d>=0 ;d--) {    
                        if(s.at(d) == ' ') {  // when it hits to ' '
                            for(int q=d+1;q < s.length() ;q++) {
                                if(s.at(q) == ' ') {
                                    return count;
                                }
                                count++;
                            }
                        }
                        if(d == 0) {
                            break;
                        }

                }
                if(p == 0) {
                    for(int f=0; f < s.length(); f++) {
                        if(s.at(f) == ' ') {
                            return count;
                        }
                            count++;
                        }
                    }
                }
            }
        }
        if(s.at(last) != ' ') {
            for(int f=last; f>=0 ; f--) {
                if(s.at(f) == ' ') {
                    for(int g=f+1 ; g<=s.length() ;g++) {
                        count++;
                        if(g == last) {
                            return count;
                        }
                    }
                }
                if(f == 0) {
                    for(int g=0; g<=s.length(); g++) {
                        count++;
                        if(g == last) {
                            return count;
                        }
                    }
                }
            }
        }
        return count;
    }
};