class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++) 
        {
            freq[nums[i]]++;
            if(freq[nums[i]] >= 2) 
            {
                return nums[i];
            }
        }
        return -1;
    }
};
