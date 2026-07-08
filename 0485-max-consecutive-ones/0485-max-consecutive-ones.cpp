class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // make another case: 
        // where firstly I will find all 1
        // then I will find each index
        // and if the indexes are moving consecuitive then I will return it
        vector<int> goat;
        int consec=1, max=0;
        for(int k=0; k < nums.size(); k++) {
            if(nums.at(k) == 1) {
                goat.push_back(k);
            }
        }// I constructed a new vector with their indexes of 1
        // [0,2,3,5]
        // [0,1,3,4,5]
        if(goat.size() == 0) {
            return 0;
        }
        if(goat.size() == 1) {
            return 1;
        }
        for(int u=0; u < goat.size()-1;u++) {
            if(goat.at(u)+1 == goat.at(u+1)) {
                consec++;
            } else {
                consec = 1;
            }
            if(max < consec) {
                max = consec;
            }
        } // consec = 3
        return max;
    }
};