#
# @lc app=leetcode id=49 lang=python3
#
# [49] Group Anagrams
#

# @lc code=start
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        output = defaultdict(list)

        for i, word in enumerate(strs):
            chars_of_word = sorted(word)
            word = ''.join(map(str, chars_of_word))
            output[word].append(strs[i])

        return list(output.values())
# @lc code=end