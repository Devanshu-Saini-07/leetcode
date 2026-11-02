
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int n = nums.size();

        if (n < 3) {
            return nums[n - 1];
        }

        return nums[n - 3];
    }
};
