#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle special cases directly
        if (divisor == 1) return dividend;
        if (divisor == -1) {
            if (dividend == INT_MIN) return INT_MAX;
            return -dividend;
        }

        bool neg = (dividend < 0) ^ (divisor < 0);

        long n = dividend == INT_MIN ? (long)INT_MAX + 1 : abs(dividend);
        long d = divisor == INT_MIN ? (long)INT_MAX + 1 : abs(divisor);

        long ans = 0;
        while (n >= d) {
            long temp = d;
            long multiple = 1;
            while (temp <= (n >> 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            n -= temp;
            ans += multiple;
        }

        return neg ? -(int)ans : (int)ans;
    }
};

int main() {
    Solution sol;

    cout << "INT_MAX = " << INT_MAX << endl; 
    cout << "INT_MIN = " << INT_MIN << endl << endl;

    cout << "INT_MIN / -1 = " << sol.divide(INT_MIN, -1) << " // should be INT_MAX" << endl;
    cout << "INT_MIN / 1  = " << sol.divide(INT_MIN, 1)  << " // should be INT_MIN" << endl;
    cout << "INT_MAX / -1 = " << sol.divide(INT_MAX, -1) << " // should be -INT_MAX" << endl;
    cout << "INT_MAX / 1  = " << sol.divide(INT_MAX, 1)  << " // should be INT_MAX" << endl;

    return 0;
}
