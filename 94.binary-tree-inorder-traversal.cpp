// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem94.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void helper(TreeNode *root, vector<int> &vect)
    {

        if (root == NULL)
        {
            return;
        }

        helper(root->left, vect);
        vect.push_back(root->val);
        helper(root->right, vect);
    }

    vector<int> inorderTraversal(TreeNode *root)
    {

        vector<int> vect;
        helper(root, vect);
        return vect;
    }
};
// @lc code=end
