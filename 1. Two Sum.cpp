class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> index;
        int ans[nums.size()];
        
        for(int i=0;i<nums.size();i++)
        {
            ans[i] = target-nums[i];
                
            auto it = std::find(nums.begin(),nums.end(),ans[i]);

            if(it != nums.end())
            {
                index.push_back(i);
            }

        }
        
        return index;
    }
};
