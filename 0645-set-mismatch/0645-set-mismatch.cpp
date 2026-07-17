class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        vector<bool> temp(nums.size(), false);
        int found_dup, found_mis=0;

         // *** Finding max and min value 
        int min=nums.at(0), max=nums.at(0);
        for(int r=1; r < nums.size(); r++) {
            if(min > nums.at(r)) {
                min = nums.at(r);
            }   
        }
        for(int r=1; r < nums.size(); r++) {
            if(max < nums.at(r)) {
                max = nums.at(r);
            }   
        }
        // ***
        // Test cases
        // {1, 2, 3, 4, 4, 6, 7, 8, 9};
        // {3, 2, 2};
        // {3, 4, 5, 7, 6, 5, 8, 9, 2, 14, 13, 15, 12, 11};
        // {1, 3, 3}
        // {1,5,3,2,2,7,6,4,8,9};
        // {1, 6, 8, 4, 5, 3, 2, 7, 7, 9, 10, 11, 14, 15, 13};
        // ***


        // Finding duplicate
        int copy_min = min;
        for(int k=0; k < temp.size(); k++) {
            if(min == 1) {
                if(temp.at(nums.at(k)-1) == false) {
                    temp.at(nums.at(k)-1) = true;
                }
                else {
                    found_dup = nums.at(k);
                }
            }
            else {
                if(temp.at(nums.at(k)-min) == false) {
                    temp.at(nums.at(k)-min) = true;
                }
                else {
                    found_dup = nums.at(k);
                }
            }
        }
        vector<bool> temp2(nums.size()+1, false);
        
        for(int q=0; q < nums.size(); q++) {
            int qwe = nums.at(q);
            if(qwe >= 1 && qwe <= nums.size()) {
                temp2.at(qwe) = true;
            }
        }

/*
        // Loop 2: Runs N times (NOT inside Loop 1)
        for (int i = 1; i <= n; ++i) {
            if (!present[i]) {
                cout << "Missing number: " << i << "\n"; // Use "\n" instead of endl
                return 0;
            }
        }
*/
        for(int d=1; d <= nums.size();++d) {
            if(!temp2.at(d)) {  
                found_mis = d;
            }
        }
        if(found_mis == 0) {
            found_mis = max + 1;
        }
    
        
        result.push_back(found_dup); 
        result.push_back(found_mis);

        return result;
    }
};
