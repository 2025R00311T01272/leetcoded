
class Solution {
public:
    int arrangeCoins(int n) {
        long long k = 1;

        while (k * (k + 1) <= 2LL * n) {
            k++;
        }

        return k - 1;
    }
};
