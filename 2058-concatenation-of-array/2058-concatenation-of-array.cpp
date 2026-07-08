class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        int m=0;
        int common = ans.size() * 2;
        ans.resize(common); // 6
        for(int k=0; k < ans.size(); k++) {
            if(m == nums.size()) {
                m = 0;
            }
            ans.at(k) = nums.at(m);
            m++;
        }
        return ans;
    }
};