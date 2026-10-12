class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int n : nums) {
            int digits = 0;

            while (n > 0) {
                digits++;
                n /= 10;
            }

            if (digits % 2 == 0)
                count++;
        }

        return count;
    }
};