class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp = 0;
        int value = 0;
        for (int i=0; i<accounts.size(); ++i) {
            for (int j=0; j<accounts[i].size(); ++j) {
                temp += accounts[i][j];
            }
            if (temp > value) {
                value = temp;
            }
            temp = 0;
        }
        return value;
    }
};
