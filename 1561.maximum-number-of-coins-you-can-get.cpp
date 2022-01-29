/*
 * @lc app=leetcode id=1561 lang=cpp
 *
 * [1561] Maximum Number of Coins You Can Get
 */

// @lc code=start
class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        int count = 0;
        int n = piles.size() / 3;
        sort(piles.begin(), piles.end());
        int j = 0;
        for (int i = piles.size() - 2; j < n; i -= 2)
        {
            count += piles[i];
            j++;
        }
        return count;
    }
};
// @lc code=end
