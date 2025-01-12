class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        vector<bool> res(candies.size());
        for(auto& it: candies){
            mx = max(mx, it);
        }
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= mx)
                res[i] = 1;
            else
                res[i] = 0;
        }
        return res;
    }
};