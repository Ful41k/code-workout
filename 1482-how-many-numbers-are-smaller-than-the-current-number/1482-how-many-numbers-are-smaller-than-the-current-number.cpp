class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count = 0; 
        vector<int> result;
        //int iisize = nums.size();
        //result.resize(iisize);
        for(int i=0;i < nums.size(); i++) {
            for(int j=0; j < nums.size() ; j++) {
                if(nums.at(i) > nums.at(j)) {
                    count++;
                }
            }    
            result.push_back(count);
            count = 0;
        }
        return result;
    }
};