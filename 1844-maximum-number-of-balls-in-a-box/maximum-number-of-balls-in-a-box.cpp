class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int box[50] = {0};
        int ans = 0;

        for (int i = lowLimit; i <= highLimit; i++) {
            int n = i;
            int sum = 0;

            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }

            box[sum]++;
            ans = max(ans, box[sum]);
        }

        return ans;
    }
};