  class Solution {
  public:
      vector<vector<int>> threeSum(vector<int>& nums) {
          sort(nums.begin(), nums.end());
          vector<vector<int>> result;

          for (int i = 0; i < (int)nums.size() - 2; i++) {
              if (i > 0 && nums[i] == nums[i - 1])
                  continue;
              if (nums[i] > 0)
                  break;

              int left = i + 1, right = nums.size() - 1;

              while (left < right) {
                  int total = nums[i] + nums[left] + nums[right];

                  if (total < 0) {
                      left++;
                  } else if (total > 0) {
                      right--;
                  } else {
                      result.push_back({nums[i], nums[left], nums[right]});
                      while (left < right && nums[left] == nums[left + 1])
                          left++;
                      while (left < right && nums[right] == nums[right - 1])
                          right--;
                      left++;
                      right--;
                  }
              }
          }

          return result;
      }
  };