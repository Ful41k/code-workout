class Solution {
public:
    bool isPalindrome(int x) {
        long int reverse=0, copy=x, result=0, count=0;
        // if 121 % 10 = 1
        // then 1 goes to
         for(int k=x; k != 0;) {
            k = k / 10;
            count++;
         }

        for(int i=1; i <= count; i++) {
            reverse = copy % 10; // 121 % 10 = 1
            copy = copy/ 10; // 121 / 10  = 12
            result = (result*10) + reverse; 
        }
        if(x < 0) {
            return false;
         }   
        if(x == result) {
            return true;
        } else {
            return false;
        }
    }
};


