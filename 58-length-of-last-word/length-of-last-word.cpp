class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int length = 0;

        // Step 1: skip trailing spaces
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: count last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};