class Solution {
public:
    long long sumAndMultiply(int n) {
        // this is not string or vector
        // 
        unsigned long long count =0, num=0, x=0, temp=0, temp2=0, sum=0;
        unsigned long long copy=n, copy2 = n;
        while(copy > 0) {
            copy = copy / 10;
            count++;
        } // how many digits, count = 8
        for(int i=0; i < count; i++) {
            num = copy2 % 10;
            copy2 = copy2 / 10; // 4
            if(num != 0) { // 4  != 0 
                temp = (temp*10) + num; // 4 
            } else {
                continue;
            }
        } // temp = 4321
        copy = reverse(temp);
        // copy = 1234
        count=0;
        x = copy; // x = 1234
        while(copy > 0) {
            copy = copy / 10; 
            count++;
        } // count = 4
        copy = x;
        temp = 0;
        for(int e=0; e<count; e++ ) {
            temp = copy % 10;
            copy = copy / 10;
            sum = sum + temp;
        } // sum = 1 + 2 + 3 + 4 = 10
        return x * sum;
    }
    int reverse(int ert) {
        int count5=0, u=0;
        int copy5 = ert;
        while(copy5 > 0) {
            copy5 = copy5 / 10; 
            count5++;
        }
        copy5 = ert;
        int num5;
         for(int r=0; r < count5; r++) {
            num5 = copy5  % 10; // num 1234
            copy5 = copy5 / 10; 
            u = (u*10) + num5;
         } 
         return u;
    }
};