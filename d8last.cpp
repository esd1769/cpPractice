#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)return INT_MAX;
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
        return neg ? (int)ans : (int)(-ans);
        
    }
};

int main() {
    Solution sol;

    cout << "INT_MAX = " << INT_MAX << endl; // 2147483647
    cout << "INT_MIN = " << INT_MIN << endl << endl; // -2147483648

    cout << "INT_MIN / -1 = " << sol.divide(INT_MIN, -1) << " // should be INT_MAX (2147483647)" << endl;
    cout << "INT_MIN / 1  = " << sol.divide(INT_MIN, 1)  << " // should be INT_MIN (-2147483648)" << endl;
    cout << "INT_MAX / -1 = " << sol.divide(INT_MAX, -1) << " // should be -INT_MAX (-2147483647)" << endl;
    cout << "INT_MAX / 1  = " << sol.divide(INT_MAX, 1)  << " // should be INT_MAX (2147483647)" << endl;

    return 0;
}