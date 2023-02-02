class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> mai(numRows, vector<int>(numRows, 0));
        for(int i=0;i<numRows;i++)
        {
            int val = 1;

            for(int j=0;j<=i;j++)
            {
                if(val!=0)
                {
                    mai[i][j] = val;
                }
                val = val * (i-j)/(j+1);
            }

        }

        for(int i=0;i<mai.size();i++)
        {
            for(int j=0;j<mai.size();j++)
            {
                auto it = find(mai[j].begin(),mai[j].end(),0);

                if(it != mai[j].end())
                {
                    mai[j].erase(it);
                }
            }
        }

        return mai;

    }
};
