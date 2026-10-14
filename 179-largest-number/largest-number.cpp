class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;

        for (int x : nums)
            v.push_back(to_string(x));

        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                if (v[i] + v[j] < v[j] + v[i]) {
                    swap(v[i], v[j]);
                }
            }
        }

        if (v[0] == "0")
            return "0";

        string ans = "";
        for (string s : v)
            ans += s;

        return ans;
    }
};