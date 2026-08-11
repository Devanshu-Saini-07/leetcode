class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int total = nums1.size() + nums2.size();
        vector<int> merged;

        for (int i = 0; i < nums1.size(); i++) {
            merged.push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            merged.push_back(nums2[i]);
        }

        sort(merged.begin(), merged.end());

        if (total % 2 == 1) {
            return merged[total / 2];
        }
        else {
            return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
        }
    }
};