/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int mx = -1, temp;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            temp = arr[i];
            arr[i] = mx;
            mx = max(temp, mx);
        }
        return arr;
    }
};
// @lc code=end
