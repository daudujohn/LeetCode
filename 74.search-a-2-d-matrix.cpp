/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int hi = (m * n) - 1;

        while (low <= hi)
        {
            int mid = (low + hi) / 2;
            int col = mid % n;
            int row = mid / n;
            if (target == matrix[row][col])
            {
                return true;
            }
            if (target < matrix[row][col])
            {
                hi = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
};
// @lc code=end
