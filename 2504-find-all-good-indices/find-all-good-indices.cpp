class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        vector<int> left(n, 1), right(n, 1);

        for (int i = 1; i < n; i++) {
            if (nums[i - 1] >= nums[i])
                left[i] = left[i - 1] + 1;
        }

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] <= nums[i + 1])
                right[i] = right[i + 1] + 1;
        }

        for (int i = k; i < n - k; i++) {
            if (left[i - 1] >= k && right[i + 1] >= k)
                ans.push_back(i);
        }

        return ans;
    }
};