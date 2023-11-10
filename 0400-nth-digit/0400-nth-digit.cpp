#include <cmath>

class Solution {
public:
    int findNthDigit(int n) {
        if (n <= 9) {
            return n; // Single-digit numbers are just the number itself
        }

        // Find the number of digits in the current range
        long long base = 9;
        int digits = 1;
        while (n - base * digits > 0) {
            n -= base * digits;
            base *= 10;
            digits++;
        }

        // Find the actual number where the nth digit is located
        int targetNum = pow(10, digits - 1) + (n - 1) / digits;

        // Find the nth digit within the target number
        int nthDigitIndex = (n - 1) % digits;
        return to_string(targetNum)[nthDigitIndex] - '0';
    }
};
