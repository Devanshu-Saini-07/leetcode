class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int num = n;
            int product = 1;

            while (num > 0) {
                product *= (num % 10);
                num /= 10;
            }

            // Special case for n = 0 (not needed here since n >= 1)
            if (product % t == 0)
                return n;

            n++;
        }
    }
};