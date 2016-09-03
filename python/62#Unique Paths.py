class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        if m>n:
            m,n = n,m
        return self.Cn(m-1,n+m-2)

    def Cn(self,m,n):
        r1=r2=1
        for i in xrange(m):
            r2*=i+1
            r1*=n-i
        return r1/r2
