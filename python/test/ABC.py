import os
class Solution(object):

    def fx(self,n):
        l=['']
        for item in l:
            if len(item)==(n+1):
                break
            l.append(item+'A')
            l.append(item+'B')
            l.append(item+'C')

        re=[]
        for item in l:
            if len(item)==n:
                re.append(item)
        return re


if __name__ == "__main__":
    s=Solution()
    sub = s.fx(3)
    print sub
    print len(sub)

    sub = ['ABC','ACB','BCA','BAC','CBA','CAB']

    flist = s.fx(10)
    print flist[:10]
    print len(flist)
    sum = 0
    for k in flist:
        for item in sub:
            if item in k:
                sum+=1
                break
    print sum
    print '>>>',len(flist)-sum
