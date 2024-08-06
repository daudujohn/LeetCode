/*
 * @lc app=leetcode id=2053 lang=cpp
 *
 * [2053] Kth Distinct String in an Array
 */

// @lc code=start
class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        unordered_map<string, int> freqCount;
        vector<string> order;

        for (int i = 0; i < arr.size(); i++)
        {
            freqCount[arr[i]]++;
            order.push_back(arr[i]);
        }
        for (auto i : order)
        {
            if (freqCount[i] == 1)
            {
                k--;
                if (k == 0)
                {
                    return i;
                }
            }
        }
        return "";
    }
};
// @lc code=end
