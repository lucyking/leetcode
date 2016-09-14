class Solution(object):
    def isABBA(self,s):
        if s==s[::-1]:
            return True
        else:
            return False

    def palindromePairs(self, words):
        """
        :type words: List[str]
        :rtype: List[List[int]]
        """
        re=[]
        for item in words:
            if len(item)==0:
                for other in words:
                    if item!=other and self.isABBA(other):
                        if not re.count([words.index(item),words.index(other)]):
                            re.append([words.index(item),words.index(other)])
                        if not re.count([words.index(other),words.index(item)]):
                            re.append([words.index(other),words.index(item)])
            else:
                for i in xrange(len(item)+1):
                    left=item[:i]
                    rev_left=left[::-1]
                    right=item[i:]
                    rev_right=right[::-1]
                    if self.isABBA(right):
                        if words.count(rev_left):
                            loc=words.index(rev_left)
                            if loc != words.index(item):
                                if not re.count([words.index(item),loc]):
                                    re.append([words.index(item),loc])

                    if self.isABBA(left):
                        if words.count(rev_right):
                            loc=words.index(rev_right)
                            if loc != words.index(item):
                                if not re.count([loc,words.index(item)]):
                                    re.append([loc,words.index(item)])

                        # print loc
                        # if loc:

        return re

if __name__ == '__main__':
    s=Solution()
    print s.palindromePairs(["bat", "tab", "cat"])
    print s.palindromePairs(["abcd","dcba","lls","s","sssll"])
    print s.palindromePairs(["abcd","dcba","lls","s","sssll"])
    s='ABCD'
    words = ["bat", "tab", "cat"]
    print s[1:3][::-1]
    print s[:-2]
    print s[-2:]
    for i ,w in enumerate(words):
        print i,'::',w

    dic = {w:i for i,w in enumerate(words)}
    print dic
    for w in dic:
        print dic[w]
        print dic['bat']
    print dic
    # print s.count('k')
