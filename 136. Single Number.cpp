class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            auto ct = count(nums.begin(), nums.end(), nums[i]);
            if(ct == 1)
            {
                ans = nums[i];
            }
        }
        return ans;
    }
};
