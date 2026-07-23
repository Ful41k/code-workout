class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int right=0, left=0, count=1;
        
        if(nums.size() == 1) {
            if(nums[0] >= target) return 1;
            else return 0;
        }
        // single case
        while(true){
            if(nums[right] >= target) {
                return count;
            }
            right++;
            if(right >= nums.size()) {
                break;
            }
        }
        right = 0;

        sum = nums[right] + nums[right+1]; 
        right++; 
        count++;
        int minLen = nums.size();
        // enters count = 2

        // multiple case
        while(true) {    
            if(sum >= target) {
                sum = sum - nums[left];
                left++;
                count--;
                if(sum >= target) {
                    continue;
                } else {
                    count++;
                    minLen = min(minLen, count);
                    if(right == nums.size()-1) {
                        return minLen;
                    }
                    count--;
                    continue;
                }
            } else {
                right++;
                if(right == nums.size()) {
                    if(minLen != nums.size()) return minLen;
                    else break;
                }
                count++;
                sum = sum + nums[right];
                continue;
            }
            //sum = sum - nums[left] + nums[vis_right];
            
        }
        return 0;
    }
};