/*
 * @lc app=leetcode id=2068 lang=cpp
 *
 * [2068] Check Whether Two Strings are Almost Equivalent
 */

// @lc code=start
class Solution
{
public:
    int mod(int x)
    {
        if (x > 0)
            return x;
        return x + (-2 * x);
    }
    bool checkAlmostEquivalent(string word1, string word2)
    {
        vector<int> hashMA(26);
        vector<int> hashMB(26);
        for (int i = 0; i < word1.length(); i++)
        {
            int index = (int)word1[i] - 97;
            int indexo = (int)word2[i] - 97;
            hashMA[index]++;
            hashMB[indexo]++;
        }
        for (int i = 0; i < hashMA.size(); i++)
        {
            int temp = hashMA[i] - hashMB[i];
            if (mod(temp) > 3)
                return false;
        }
        return true;
    }
};
// @lc code=end
