#
# @lc app=leetcode id=128 lang=python3
#
# [128] Longest Consecutive Sequence
#

# @lc code=start
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        longest_len = 0

        for num in nums_set:
            if (num - 1) not in nums_set:
                current_num = num
                while (current_num) in nums_set:
                    current_num += 1
                longest_len = max(longest_len, current_num - num)
        return longest_len
# @lc code=end

