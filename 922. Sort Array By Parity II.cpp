class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int x = nums.size();
        vector<int> even;
        vector<int> odd;

        for(int i=0;i<x;i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<x;i++)
        {
            if(i%2 == 0)
            {
                for(int j=0;j<even.size();j++)
                {
                    nums.push_back(even[j]);
                    even.erase(even.begin()+j);
                    break;
                }
            }
            else
            {
                for(int j=0;j<odd.size();j++)
                {
                    nums.push_back(odd[j]);
                    odd.erase(odd.begin()+j);
                    break;
                }
            }
        }
        return nums;
    }
};
