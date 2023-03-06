class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();

        set<int> s;

        for(auto it : candyType)
        {
            s.insert(it);
        }

        int type = s.size();

        if(n/2 == type)
        {
            return type;
        }
        else if(n/2<type)
        {
            return n/2;
        }

        return type;
    }
};
