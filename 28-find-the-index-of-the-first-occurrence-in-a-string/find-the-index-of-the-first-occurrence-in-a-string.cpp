class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for (int i = 0; i <= n - m; i++) {
            int j = 0;

            // Check match
            while (j < m && haystack[i + j] == needle[j]) {
                j++;
            }

            // If full match found
            if (j == m) return i;
        }

        return -1;
    }
};