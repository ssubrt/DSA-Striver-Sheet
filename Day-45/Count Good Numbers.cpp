----------------->>>>>>>>>>>>>>>>> Approach  <<<<<<<<<<<<<<<<<<<<--------------------------

// Time Complexity: O(log⁡n)
// Space Complexity: O(log⁡n)


#include <iostream>
#include <cmath>
#define MOD 1000000007

class Solution {
public:
    long long modExp(long long base, long long exp, long long mod) {
        if (exp == 0) return 1;
        long long half = modExp(base, exp / 2, mod);
        half = (half * half) % mod;
        if (exp % 2 != 0) {
            half = (half * base) % mod;
        }
        return half;
    }

    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;  // ceil(n / 2.0)
        long long oddPositions = n / 2;  // floor(n / 2.0)

        long long evenCount = modExp(5, evenPositions, MOD);
        long long oddCount = modExp(4, oddPositions, MOD);

        return (evenCount * oddCount) % MOD;
    }
};