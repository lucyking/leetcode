class Solution(object):
    def palindromePairs(self, words):
        """
        :type words: List[str]
        :rtype: List[List[int]]
        """
        result_dic = dict()
        dic = {w:i for i,w in enumerate(words)}

        for w in dic:
            x = dic[w]
            for i in xrange(len(w)+1):
                l,r = w[:i],w[i:]
                if l==l[::-1] and r[::-1] in dic and dic[r[::-1]] != x:
                    result_dic[dic[r[::-1]],x]=1
                if r==r[::-1] and l[::-1] in dic and dic[l[::-1]] != x:
                    result_dic[x,dic[l[::-1]]]=1
        # dict --> list
        result = []
        for item in result_dic.keys():
            tmp = list(item)
            result.append(tmp)
        return result


if __name__ == '__main__':
    s=Solution()
    print s.palindromePairs(["bat", "tab", "cat"])
    print s.palindromePairs(["abcd","dcba","lls","s","sssll"])
    print s.palindromePairs(["aa", ""])
