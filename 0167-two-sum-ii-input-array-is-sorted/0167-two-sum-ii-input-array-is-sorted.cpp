class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int i=0, j=numbers.size()-1;
        int sum;

        while(i < j) {
            sum = numbers.at(i) + numbers.at(j);
            if(sum == target) {
                result.push_back(i+1);
                result.push_back(j+1);
                return result;
            }
            if(sum > target) {
                j--;
                continue;
            }
            if(sum < target) {
                i++;
                continue;
            }
        }

        return result;
    }
};