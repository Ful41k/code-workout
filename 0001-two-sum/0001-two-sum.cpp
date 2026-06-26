class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // it should take two numbers, and if it is equal to target then return.
        vector<int>  res;
        for(int i=0;  i < nums.size(); i++) {
            for(int j=0; j<nums.size(); j++) {
                int test=0;
                if(i == j) {
                    continue;
                }
                test = nums.at(i) + nums.at(j);
                if(test == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};