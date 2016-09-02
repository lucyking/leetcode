class Solution(object):
    def findRepeatedDnaSequences(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        d = dict()
        valDict = {'A':0,'C':1,'G':2,'T':3}
        val = 0
        res = []
        for i in xrange(len(s)):
            val = ((val << 2)+(valDict[s[i]]&0b11)) & 0xFFFFF
            if i<9:
                continue
            else:
                d[val] = d.get(val,0)+1
                if d[val]==2:
                    res.append(s[i-9:i+1])
        return res


if __name__ == '__main__':
    a = Solution()
    print  a.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT")