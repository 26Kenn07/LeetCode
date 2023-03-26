class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        vector<int> v;
        vector<int> temp;
        set<int> ss;
        for(auto i1 : arr)
        {
            ss.insert(i1);
        }
        set<int> s;
        for(auto i1 : ss)
        {
            int it = count(arr.begin(),arr.end(),i1);
            v.push_back(it);
        }
        for(auto i1 : v)
        {
            s.insert(i1);
        }
        for(auto i2 : s)
        {
            temp.push_back(i2);
        }

        sort(v.begin(),v.end());
        if(v != temp)
        {
            return false;
        }
        else
        {
            return true;
        }

        
        
    }
};
