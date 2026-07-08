class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result = nums; // n = 3
        int initial = n;
        for(int k =0, p=0; k < n * 2; k++) {
            if(p == initial) {
                return result;
            }
            if(n == (2*n)-1) {
                return result;
            }
            if(k % 2 == 0) {
                result.at(k) = nums.at(p);    
                p++;
            } else {
                result.at(k) = nums.at(n);
                n++;
            }
        }
        return result;
    }
};