class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n + 2, 1), suffix(n + 2, 1);

        for(int i = 1; i <= n; i++)
        {
            prefix[i] *= nums[i - 1] * prefix[i - 1];
        }
        for(int i = n; i > 0; i--)
        {
            suffix[i] *= nums[i - 1] * suffix[i + 1];
        }
        for(int i = 1; i <= n; i++)
        {
            nums[i - 1] = suffix[i + 1] * prefix[i - 1];
        }
        return nums;
    }
};