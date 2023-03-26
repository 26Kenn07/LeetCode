class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int cnt,sum=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            cnt = count(nums.begin(),nums.end(),nums[i]);

            if(cnt == 1)
            {
                temp.push_back(nums[i]);
            }
        }

        for(int i=0;i<temp.size();i++)
        {
            sum = sum + temp[i];
        }

        return sum;
    }
};
