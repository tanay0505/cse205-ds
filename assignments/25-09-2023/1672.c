class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int max_sum = 0;
        int row = accounts.size();
        int col = accounts[0].size();
        for(int i=0;i<row;i++)
        {
            sum = 0;
            for(int j=0;j<col;j++)
            {
                sum = sum + accounts[i][j];
            }
        max_sum = max(sum, max_sum);
        }
        return max_sum;
    }
};