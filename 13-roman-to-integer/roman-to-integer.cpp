class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            int value = getValue(s[i]);

            // If next value is greater → subtract
            if (i + 1 < s.length() && value < getValue(s[i + 1])) {
                total -= value;
            } else {
                total += value;
            }
        }

        return total;
    }

private:
    int getValue(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }
};