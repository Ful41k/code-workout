class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        ans.resize(ans.size() * 2); // 6
        for(int k=0, m=0; k < ans.size(); k++) {
            if(m == nums.size()) {
                m = 0;
            }
            ans.at(k) = nums.at(m);
            m++;
        }
        return ans;
    }
};