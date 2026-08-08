class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();
        int sum = 0;
        int result[1000];

        for(int i = 0; i < n; i++){
            sum += nums[i];
            result[i] = sum;
        }

        for(int i = 0; i < n; i++){
            cout << result[i] << " ";
        }

        return vector<int>(result, result + n);
    }
};