class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        if m>n:
            swap(m,n)
        return self.Cn(m-1,n+m-2)
    
    def Cn(self,m,n):
        r1=r2=1
        for i in m:
            r2*=i+1
        for j in n:
            r1*=j+1
        return r1/r2
            
