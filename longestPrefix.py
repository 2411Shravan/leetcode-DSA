# Write a function to find the longest common prefix string amongst an array of strings.

# If there is no common prefix, return an empty string "".

 

# Example 1:

# Input: strs = ["flower","flow","flight"]
# Output: "fl"
# Example 2:

# Input: strs = ["dog","racecar","car"]
# Output: ""
# Explanation: There is no common prefix among the input strings.
 

# Constraints:

# 1 <= strs.length <= 200
# 0 <= strs[i].length <= 200
# strs[i] consists of only lower-case English letters.

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if (len(strs)==0):
            return ""
        if (len(strs)==1):
            return strs[0]
        
        for j in range(0,len(strs[0])):
            for i in range(0,len(strs)-1):
                if (j>=len(strs[i+1]) or strs[i][j]!=strs[i+1][j]):
                    if j==0:
                        return ""
                    else:
                        return strs[i][0:j]
        return strs[0]
        