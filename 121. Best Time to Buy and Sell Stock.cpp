class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = INT_MAX, maxx= 0;

        for(auto it : prices)
        {
            minn = min(minn,it);
            maxx = max(maxx,it-minn);

        }
       return maxx;
    }
};
