/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int last_element = nums.size() - 1;
        for (int i = 0; i < k; i++)
        {
            int num = nums[last_element];
            nums.pop_back();
            nums.insert(nums.begin(), num);
        }
    }
};
// @lc code=end
