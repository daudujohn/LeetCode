#
# @lc app=leetcode id=3 lang=python
#
# [3] Longest Substring Without Repeating Characters
#

# @lc code=start
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        : rtype: int
        """

        buffer = ''
        left, right = 0, 0
        max_length =  0
        
        while right < len(s):
            if s[right] not in buffer:
                buffer += s[right]
                right += 1
                max_length =  max(max_length, len(buffer))
            else:
                buffer =  buffer[1:]
                left += 1
        return max_length
                
        
# @lc code=end

