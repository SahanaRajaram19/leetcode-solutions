class Solution:
    def lengthOfLongestSubstring(self, s):
        max_len = 0

        for i in range(len(s)):
            temp = ""

            for j in range(i, len(s)):
                if s[j] not in temp:
                    temp += s[j]
                    max_len = max(max_len, len(temp))
                else:
                    break

        return max_len
        