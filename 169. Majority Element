class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        
        int i=0,c;
    
        while(i<nums.size())
        {
            c = count(nums.begin(), nums.end(),nums[i]);

            if(c > nums.size()/2)
            {
                return nums[i];
                break;
            }

            i = i + c;
        }

        return 0;
    }
};
