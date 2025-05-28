#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case explicitly
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Determine sign of the result
        bool neg = (dividend < 0) ^ (divisor < 0);

        // Use unsigned long long to safely store absolute values and avoid overflow on shifts
        unsigned long long n = dividend < 0 ? -(unsigned long long)dividend : (unsigned long long)dividend;
        unsigned long long d = divisor < 0 ? -(unsigned long long)divisor : (unsigned long long)divisor;

        unsigned long long ans = 0;

        // Iterate from the highest bit to the lowest
        for (int i = 31; i >= 0; i--) {
            if ((n >> i) >= d) {
                ans += 1ULL << i;
                n -= d << i;
            }
        }

        return neg ? -(int)ans : (int)ans;
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
