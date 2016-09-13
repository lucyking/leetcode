class Solution(object):

    def subIsPali(self,s1,s2):
        s=''
        old_s1=s1
        old_s2=s2
        if len(s1)>=len(s2):
            s1=s1[:len(s2)]
            s=s1+s2
            if s!=s[::-1]:
                return False
            if old_s1[len(s2):]!=old_s1[len(s2):][::-1]:
                return False
        else:
            s2=s2[len(s2)-len(s1):]
            s=s1+s2
            if s!=s[::-1]:
                return False
            if old_s2[:len(s2)-len(s1)]!=old_s2[:len(s2)-len(s1)][::-1]:
                return False
        return True

    def isPalindrome(self,s1,s2):
        if not self.subIsPali(s1,s2):
            return False
        return True  # Return HERE <----


        tmp = s1+s2
        """
        if tmp!=tmp[::-1]:
            return False
        return True
        """

        i = 0
        j = len(tmp)-1
        while i<j:
            if tmp[i]!=tmp[j]:
                return False
            i+=1
            j-=1
        return True

    def palindromePairs(self, words):
        """
        :type words: List[str]
        :rtype: List[List[int]]
        """
        re=[]
        for item in words:
            for other in words:
                if other!=item:
                    if self.isPalindrome(item,other):
                        re.append([words.index(item),words.index(other)])
        return re

if __name__ == '__main__':
    s=Solution()
    print s.palindromePairs(["bat", "tab", "cat"])
    print s.palindromePairs(["abcd","dcba","lls","s","sssll"])
    s='ABCD'
    print s[1:3][::-1]
    print s[:-2]
    print s[-2:]


        
