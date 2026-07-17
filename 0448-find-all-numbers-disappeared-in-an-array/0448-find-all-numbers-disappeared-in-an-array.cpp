class Solution{
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<bool> temp(nums.size()+1, false);
        int found_mis=0;
        int max=nums.size(), min=nums.at(0);
        for(int f=1; f < nums.size(); f++) {
            if(min > nums.at(f)) {
                min = nums.at(f);
            }
        }
        for(int i=0; i < nums.size(); i++) {
            int tempo1 = nums.at(i);
            if(tempo1 >= 1 && tempo1 <= nums.size()) {
                temp.at(tempo1) = true;
            }
        }
        for(int d=1; d < temp.size(); ++d) {
            if(!temp.at(d)) {
                found_mis = d;
                result.push_back(found_mis);
            }
        }
        //if(found_mis == 0) {
        //    result.push_back(found_mis);
        //}
        return result;
    }
};