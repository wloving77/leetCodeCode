class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """

        len1 = len(word1)
        len2 = len(word2)

        for char in range(0, max(len1,len2)):
            if(char < len1):
                print(word1[char])
            if(char < len2):
                print(word2[char])

x = Solution()
x.mergeAlternately("abc","defff")