/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
#include <bits/stdc++.h>

class Solution
{
public:
    int mySqrt(int x)
    {
        double l = 0;
        double r = x;
        double mid;
        double i = 0;
        double prev_l = 0;
        double prev_r = 0;

        while (true)
        {
            i++;
            double prev_mid = mid;
            mid = (r + l) / 2;
            mid = floor(mid);
            prev_r = r;
            prev_l = l;
            double square = mid * mid;

            if (l == prev_l && r == prev_r && mid == prev_mid)
            {
                return mid;
            }
            if (square == x)
            {
                return mid;
            }
            else if (square > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
};
// @lc code=end
