class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i != j && arr[j] == 2 * arr[i]) {
                    return true;
                }
            }
        }
        return false;
    }
};