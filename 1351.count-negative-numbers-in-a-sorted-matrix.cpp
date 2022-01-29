/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            vector<int> temp = grid[i];
            for (int j = temp.size() - 1; j >= 0; j--)
            {
                if (temp[j] >= 0)
                    break;
                count++;
            }
        }
        return count;
    }
};
// @lc code=end
