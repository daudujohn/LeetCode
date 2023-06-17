#
# @lc app=leetcode id=275 lang=python3
#
# [275] H-Index II
#

# @lc code=start
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        start = 0
        end = n - 1

        while(end >= start):
            mid = (start + end)//2
            len_to_end = n - mid
            if (len_to_end == citations[mid]):
                return citations[mid]
            elif (len_to_end > citations[mid]):
                start = mid + 1
            else:
                end = mid - 1
        return n - start

# @lc code=end

