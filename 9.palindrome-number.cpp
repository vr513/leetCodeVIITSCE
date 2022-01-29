/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        string main = "";
        while (x)
        {
            int temp = (x % 10) + 48;
            x /= 10;
            main.push_back((char)temp);
        }
        string rev = main;
        reverse(rev.begin(), rev.end());
        if (rev == main)
            return true;
        return false;
    }
};
// @lc code=end
