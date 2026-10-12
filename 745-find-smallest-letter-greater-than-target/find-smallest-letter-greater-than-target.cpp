
class Solution {
public:
    char solve(vector<char>& letters, char target, int st, int end) {
        if (st > end) {
            return letters[st % letters.size()];
        }

        int mid = st + (end - st) / 2;

        if (letters[mid] > target) {
            return solve(letters, target, st, mid - 1);
        }
        else {
            return solve(letters, target, mid + 1, end);
        }
    }

    char nextGreatestLetter(vector<char>& letters, char target) {
        return solve(letters, target, 0, letters.size() - 1);
    }
};