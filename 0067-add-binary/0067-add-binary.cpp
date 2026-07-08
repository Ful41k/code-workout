class Solution {
public:
    string addBinary(string a, string b) {
        int sum, total, carry=0;
        string out;
        if(a.length() > b.length()) {
            out = a;
        }
        else {out = b;} // copy the integers to out, from the highest length
        int count = out.length()-1; 
        if(a.length() == 1 && b.length() == 1) {
            if(a.at(0) > b.at(0)){
                out = a;
            } else {out = b;} 
        }
        int real_a, real_b; // converting to integer

        for(int i = a.length() - 1, j = b.length() - 1; count>=0; count--, j--, i--) {
            if(i < 0) {
                real_a = 0;   
            } else { real_a = a.at(i) - '0'; }
            if(j < 0) {
                real_b = 0;
            } else { real_b = b.at(j) - '0'; }
            
            sum = real_b + real_a + carry;        
            carry = 0;
            
            if(count == 0) {
                if(sum == 2 || sum == 3) {    
                    total = sum % 2; // 2 % 2 = 0 && 3 % 2 = 1
                    carry = sum / 2; // 2 / 2 = 1 && 3 / 2 = 1
                    if(carry == 1 && total == 1) {
                        total = total + '0';
                        char result = total;
                        out.at(count) = result;
                        out.insert(out.begin(), '1');
                        return out;
                    }
                    if(carry == 1 || total == 0) {
                        total = carry;
                    }
                    total = total + '0';
                    char result = total;
                    out.at(count) = result;
                    if(out.compare(count+1, 1, "0") == 0) {
                        out.insert(out.begin()+1, '0'); 
                    }
                    if(out.compare(count+1, 1, "1") == 0) {
                        out.insert(out.begin()+1, '0'); 
                    }
                    if(out.length() == 1) {
                        out.insert(out.begin()+1, '0');
                    }
                    return out;
                }
            }
            if(sum == 2 || sum == 3) {
                total = sum % 2; // 2 % 2 = 0 && 3 % 2 = 1
                carry = sum / 2; // 2 / 2 = 1 && 3 / 2 = 1
            }
            if(sum == 1 || sum == 0) {
                total = sum; 
            }
            total = total + '0';
            char result = total; // converting to 1 or 0 as character
            out.at(count) = result; // moving it to result.
        }
        return out;
    }
};
// solved
