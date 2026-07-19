class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0, current=0, count = 1;
        if(nums.size() == 1) {
            if(nums.at(0) == 1) return 1;
            else  return 0;
        }
        
        for(int i=0, j=1; i < nums.size()-1; i++, j++) {
            if(nums.at(i) == nums.at(j) && nums.at(i) == 1 && nums.at(j) == 1) {
                count++;
                current = count;
            }
            if(nums.at(i) != nums.at(j)) {
                count = 1;
                current = count;
            }
            if(max < current) {
                max = current;
            }
        }
        return max;
    }
};