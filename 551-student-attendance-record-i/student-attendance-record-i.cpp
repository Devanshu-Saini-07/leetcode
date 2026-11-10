class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;

        for (char ch : s) {
            if (ch == 'A') {
                absent++;
            }

            if (ch == 'L') {
                late++;
            } else {
                late = 0;
            }

            if (absent >= 2 || late >= 3) {
                return false;
            }
        }

        return true;
    }
};