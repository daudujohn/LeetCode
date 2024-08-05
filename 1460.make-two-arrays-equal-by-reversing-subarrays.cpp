/*
 * @lc app=leetcode id=1460 lang=cpp
 *
 * [1460] Make Two Arrays Equal by Reversing Subarrays
 */

// @lc code=start
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::unordered_map<int, int> freqCount;

        for (int i = 0; i < arr.size(); i++) {
            freqCount[arr[i]]++;
            freqCount[target[i]]--;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (freqCount[arr[i]] != 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

