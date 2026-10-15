class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            int val = matrix[mid / n][mid % n];

            if (val == target) return true;
            else if (val < target) l = mid + 1;
            else r = mid - 1;
        }

        return false;
    }
};
