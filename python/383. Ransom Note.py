class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        lm = list(magazine)
        lr = list(ransomNote)
        for item in lr:
            if item in lm:
                lm.remove(item)
            else:
                return False
        return True
