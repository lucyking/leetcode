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




        return l2



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


# test case
    l3= [[], ['A'], ['B'], ['C'], ['A', 'A'], ['A', 'B'],['A','A','A']]
    re=[]

    print ['A'] in l3
    print type(l3[-1])
    print ''.join(str(l3[-1]))

    for item in l3:
        if len(item)==3:
            re.append(item)

    print re
    # l33=filter(lambda x:len(x)!=3,l3)
    # print l33
