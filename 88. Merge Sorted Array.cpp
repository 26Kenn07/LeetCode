class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector<int> v;
        if(m == 0)
        {
            nums1.clear();
            for(auto it : nums2)
            {
                nums1.push_back(it);
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
               v.push_back(nums1[i]);
            }
            for(int i=0;i<n;i++)
            {
               v.push_back(nums2[i]);
            }

            nums1.clear();
            sort(v.begin(),v.end());
            for(auto it1 : v)
            {
                nums1.push_back(it1);
            }
        }
    }
};
