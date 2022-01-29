/*
 * @lc app=leetcode id=950 lang=cpp
 *
 * [950] Reveal Cards In Increasing Order
 */

// @lc code=start
class Solution
{
public:
    vector<int> deckRevealedIncreasing(vector<int> &deck)
    {
        sort(deck.begin(), deck.end());
        deque<int> res;
        while (deck.size() != 0)
        {
            if (res.size() != 0)
            {
                res.push_front(res[res.size() - 1]);
                res.pop_back();
            }
            res.push_front(deck[deck.size() - 1]);
            deck.pop_back();
        }
        vector<int> result;
        for (auto x : res)
        {
            result.push_back(x);
        }
        return result;
    }
};
// @lc code=end
