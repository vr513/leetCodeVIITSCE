/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        if (nums[1] != nums[0])
            return nums[0];
        for (int i = 2; i < nums.size(); i += 2)
        {
            if (nums[i + 1] != nums[i])
                return nums[i];
        }
        return -1;
    }
};
// @lc code=end
