#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int len(int n) {
        int count=0;
        while (n) {
        n = n / 10;
        count++; 
        }
        return count;
    }
    std::vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        int lowlen = len(low);
        int highlen = len(high);
        vector<int> uxt;
        for(int k=lowlen; k <=  highlen; k++) {
            for(int p=0; p < 9 + 1 - k ; p++) {
                int total = stoi(s.substr(p , k));
                if(total  >= low && total <= high) {
                    uxt.push_back(total);
                }
            }
        }
        
        return uxt;
    }
};