/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int temp = nums[nums.size() - 1] - 1;
        temp = temp * (nums[nums.size() - 2] - 1);
        return temp;
    }
};
// @lc code=end
