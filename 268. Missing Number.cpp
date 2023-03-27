class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int x = nums.size();
        int ans;
        vector<int> v;

        for(int i=0;i<=x;i++)
        {
            v.push_back(i);
        }

        for(int i=0;i<=x;i++)
        {
            auto it = find(nums.begin(),nums.end(),v[i]);

            if(it == nums.end())
            {
                ans = v[i];
            }
        }
        return ans;
    }
};
