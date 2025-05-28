class Solution {
public:
    int divide(int dividend, int divisor) {
        bool neg=true;
        if (dividend <0 && divisor > 0) neg=false;
        if (dividend >0 && divisor < 0) neg=false;
        long n = abs((long)dividend);
        long d = abs((long)divisor);
        long ans=0;
        while(n >= d){
            long c=0;
            while (n>(d<<(c+1))){
                c++;
            }
            
            ans=ans+(1<<c);
            n=n-(d<<c);
        }
        if (neg && ans >= INT_MAX) return INT_MAX;
        if (!neg && -ans <= INT_MIN) return INT_MIN;
        return neg ? ans : -ans;
        
    }
};
