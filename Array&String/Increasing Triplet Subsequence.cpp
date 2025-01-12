class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mxElemnt = *max_element(nums.begin(), nums.end());
        int firstMin = mxElemnt, secondMin = mxElemnt;
        
        for(auto& it: nums)
        {
            if(it <= firstMin)
                firstMin = it;
            else if(it <= secondMin)
                secondMin = it;
            else
                return true;
        }
        return false;
    }
};