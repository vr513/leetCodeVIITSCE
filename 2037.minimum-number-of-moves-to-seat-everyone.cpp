/*
 * @lc app=leetcode id=2037 lang=cpp
 *
 * [2037] Minimum Number of Moves to Seat Everyone
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
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int num = 0;
        for (int i = 0; i < seats.size(); i++)
        {
            num += mod(seats[i] - students[i]);
        }
        return num;
    }
};
// @lc code=end
