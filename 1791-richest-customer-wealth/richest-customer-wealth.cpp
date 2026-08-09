class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int comp = 0, sum = 0;

        for(int i = 0; i < accounts.size(); i++){
            sum = 0;

            for(int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
            }

            if(comp <= sum){
                comp = sum;
            }
        }

        return comp;
    }
};