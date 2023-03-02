class Solution {
public:
    void moveZeroes(vector<int>& nums) {

       vector<int> s;
    auto  it = find(nums.begin(), nums.end(), 0);
    if(it != nums.end())
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                s.push_back(nums[i]);
                
            }
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                s.push_back(nums[i]);
                
            }
        }
        nums = s;
    }
        
    }
};
