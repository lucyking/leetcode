class Solution(object):
    def maxRotateFunction(self,A):
        if len(A)==0:
            return 0
        i=0
        s=sum(A)
        LEN=len(A)
        k = [i for i in xrange(len(A))]
        k_sum=0

        for i in xrange(len(A)):
            k_sum+=k[i]*A[i]

        re=k_sum
        for i in xrange(LEN-1,-1,-1):
            k_sum=k_sum-A[i]*(LEN)+s   # (len-1)+1 ==> len
            re=max(re,k_sum)
        return re

if __name__ =="__main__":
    s=Solution()
    t=[4,3,2,6]
    print s.maxRotateFunction(t)
    t=[2147483647,2147483647]
    print s.maxRotateFunction(t)

    print sorted([4,4])[-1]
    # for k in t:
        # print t.index(k),k
    # print t[2:]+t[:2]
