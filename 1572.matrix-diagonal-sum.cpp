/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */

// @lc code=start
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int res = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            int index = mat[i].size() - 1;
            res += mat[i][i] + mat[i][index - i];
        }
        if (mat.size() % 2 == 1)
            res -= mat[mat.size() / 2][mat.size() / 2];
        return res;
    }
};
// @lc code=end
