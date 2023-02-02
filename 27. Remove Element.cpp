class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> n;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != val)
            {
                n.push_back(nums[i]);
            }
        }

        nums.clear();

        for(auto it : n)
        {
            nums.push_back(it);
        }

        return nums.size();
    }
};
