class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int> v;
        vector<int> v1;
        if(rowIndex == 0)
        {
            v1.push_back(1);
        }
        else
        {
            for(long i=0;i<rowIndex+1;i++)
            {
                int val =1;
                for(long j =0;j<=i;j++)
                {
                    v.push_back(val);
                    val = val*(i-j)/(j+1);
                }
            }

            for(auto i=v.end()-1;i>v.end()-rowIndex-2;i--)
            {
                v1.push_back(*i);
            }

        }
    return v1;
    }
};
