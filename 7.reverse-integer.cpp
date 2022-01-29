/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int rem = 0;
        int new_int;
        while (x != 0)
        {
            new_int = x % 10;
            x = x / 10;
            if ((rem > INT_MAX / 10) || (rem < INT_MIN / 10)) // checking for overflow
            {
                return 0;
            }
            rem = rem * 10 + new_int;
        }
        return rem;
    }
};
// @lc code=end
