class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=INT_MIN;
        vector<int> temp;
        for(int i=0;i<accounts.size();i++)
        {
            int ans = 0;
            for(int j=0;j<accounts[i].size();j++)
            {
                ans = accounts[i][j] + ans;
            }
            temp.push_back(ans);
        }

        for(int i=0;i<temp.size();i++)
        {
            maxx = max(maxx,temp[i]);
        }

        return maxx;
    }
};
