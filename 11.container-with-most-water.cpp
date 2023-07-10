/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int low = 0;
        int area = 0;
        int hi = height.size() - 1;
        int* p1 = &height[low];
        int* p2 = &height[hi];
        while (low < hi)
        {
            p1 = &height[low];
            p2 = &height[hi];
            int fmr_area = area;

            if (*p2 < *p1)
            {
                area = *p2 * (hi - low);
                hi--; 
            }
            else
            {
                area = *p1 * (hi - low);
                low++;
            }

            if (area < 0)
            {
                area = area * -1;
            }
            if (fmr_area > area)
            {
                area = fmr_area;
            }
        }
        return area;
    }
};
// @lc code=end