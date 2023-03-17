class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool v;
        int i=0;

        if(arr.size()<=2)
        {
            v = false;
        }
        else if(arr.size()==3)
        {
            if(arr[i]%2 != 0 && arr[i+1]%2 != 0 && arr[i+2]%2 != 0)
            {
                v = true;
            }
            else
            {
                v = false;
            }
        }
        else
        {
            for(i = 0;i<arr.size()-2;i++)
            {
                if(arr[i]%2 != 0 && arr[i+1]%2 != 0 && arr[i+2]%2 != 0)
                {
                    v = true;
                    break;
                }
                else
                {
                    v = false;
                }
            }
        }
        return v;
    }
};
