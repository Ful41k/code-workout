class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // Input: "hello" , "ll"
        // Output: 2
        if(haystack.length() < needle.length()) {
            return -1;
        }
        char first_char = needle.at(0);

        for(int i=0; i < haystack.length();i++) {
            
            if(haystack.compare( i, needle.length(), needle) == 0) {
                return i;
            }
        }
        return -1;
    }
};