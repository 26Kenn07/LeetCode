class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        if(nums.size()<=2)
        {
            sort(nums.begin(),nums.end());
            auto it = --nums.end();

            return *it;
        }
        set<int> s;
    
        for(auto it :nums)
        {
            s.insert(it);
        }
        
        
        nums.clear();
        
        for(auto it :s)
        {
            nums.push_back(it);
        }
        
        reverse(nums.begin(), nums.end());
        
        auto it = nums.begin();
        
        for(int i=0;i<2;i++)
        {
            it++;
        }
        
        if(nums.size()<=2)
        {
            sort(nums.begin(),nums.end());
            auto it = --nums.end();

            return *it;
        }
        int ans = *it;
        return ans;
    }
};
