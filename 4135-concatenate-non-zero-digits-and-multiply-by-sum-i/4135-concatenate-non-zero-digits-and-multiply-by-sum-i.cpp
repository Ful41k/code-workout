class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0, temp=1, x=0, flag;
        while(n>0) {
            flag = n % 10;
            sum += flag; // it will sum up automatically
            if(flag > 0) {
                x += flag * temp;
                temp *= 10;
            }
            n = n / 10;
        }
        return sum * x;
    }
};