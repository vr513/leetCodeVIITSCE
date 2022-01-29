/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */

// @lc code=start
class Solution
{
public:
    void invert(vector<int> &x)
    {
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == 0)
                x[i] = 1;
            else
                x[i] = 0;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        for (int a = 0; a < image.size(); a++)
        {
            reverse(image[a].begin(), image[a].end());
        }
        for (int a = 0; a < image.size(); a++)
        {
            invert(image[a]);
        }
        return image;
    }
};
// @lc code=end
