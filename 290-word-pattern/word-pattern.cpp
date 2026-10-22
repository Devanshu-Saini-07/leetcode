class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string words[300];
        int n = 0;
        string word = "";

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                words[n++] = word;
                word = "";
            } else {
                word += s[i];
            }
        }

        if (pattern.size() != n)
            return false;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (pattern[i] == pattern[j] &&
                    words[i] != words[j])
                    return false;

                if (pattern[i] != pattern[j] &&
                    words[i] == words[j])
                    return false;
            }
        }

        return true;
    }
};