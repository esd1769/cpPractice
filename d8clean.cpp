class Solution {
public:
    int divide(int dividend, int divisor) {
        //no this line
        //if (dividend == INT_MIN && divisor == -1)return INT_MAX;
        //extra one line if you dont add neg && while returning int max intmin
        //if (dividend == INT_MIN && divisor == 1)return INT_MIN;
        bool neg=true;
        if (dividend <0 && divisor > 0) neg=false;
        if (dividend >0 && divisor < 0) neg=false;
        // long n=abs(dividend);
        // long d =abs(divisor);
        long n = abs((long)dividend);
        long d = abs((long)divisor);

        long ans=0;
        //while(n){
        while(n >= d){
            //long is better
            //int c=0;
            long c=0;
            // while (n>(d<<c))
            while (n>(d<<(c+1))){
                c++;
            }
            
            ans=ans+(1<<c);
            n=n-(d<<c);
        }
        //if (neg && ans>((1<<31)-1)) return INT_MAX;
        if (neg && ans >= INT_MAX) return INT_MAX;

        //if ((!neg)&&-ans>(-(1>>31))) return INT_MIN;
        if (!neg && -ans <= INT_MIN) return INT_MIN;

        //ternary operator
        //condition ? value_if_true : value_if_false

        return neg ? ans : -ans;
        
    }
};
