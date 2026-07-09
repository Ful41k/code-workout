class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // Firstly, I need loop that takes each index to check
        // Secondly, when the index is selected, then the left side should be added to every element of 
        // left side, and the same operation happens on right side
        // if the sum of left and right is equal to each other, then I should return this index.
        // if not the -1.
        // if I select first index where his left side is nothing, so it would be 0.
        // and if the right side of index is also equal to 0, then I should return 0.
        int last = nums.size() - 1;
        for(int i=0; i < nums.size(); i++) {
            if(i == 0) {
               // sum right side
                int sum=0;
               for(int j= i+1; j < nums.size(); j++) {
                   sum = sum + nums.at(j);
               } 
                if(sum == 0) {
                    return 0;
                }
                continue;
            }
            if(i != 0) {
                // sum right and left sides
                int sum=0, sum2=0;
                // sum of right
                for(int k=i+1; k < nums.size() ; k++) {
                    sum = sum + nums.at(k);
                }
                // sum of left
                for(int p=i-1; p >= 0; p--) {
                    sum2 = sum2 + nums.at(p);
                }
                if(sum == sum2) {
                    return i;
                }
                continue;
                
            }
            if(i == last) {
                // sum left side
                int sum=0;
               for(int j = last; j >= 0; j--) {
                   sum = sum + nums.at(j);
               } 
                if(sum == 0) {
                    return 0;
                }
            }
        }
        return -1;
    }
};