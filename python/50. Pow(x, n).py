# -*- encoding:utf8 -*-
import sys


class Solution(object):
    i=0
    j=0
    def myPositivePow(self,x,n):
        # self.i+=1
        # print self.i
        if x==0:
            return 0
        if n==0:
            return 1

        v = self.myPositivePow(x,n/2) # 减少递归次数
        if v*v>sys.maxint:
            return float('inf')    # 超出python MAX_INT 返回正无穷  跳出循环
        if n%2==0:
            return v*v
        else:
            return v*v*x

    def myPositivePow2(self,x,n):
        # self.j+=1
        # print self.j
        if x==0:
            return 0
        if n==0:
            return 1

        if n%2==0:
            return self.myPositivePow2(x,n/2)*self.myPositivePow2(x,n/2)   # 递归次数更多

        elif n%2==1:
            return self.myPositivePow2(x,n/2)*self.myPositivePow2(x,n/2)*x


    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if n==0:
            return 1

        re=1
        flag=None

        if n<0:
            n=-n
            flag=True


        """
        dic = {1:x}
        print dic
        time=0
        while time<=n:
            l=sorted(dict.keys())
            if l[-1]+time<n:
                re=re*dic[l[-1]]
                dic[2*time]=re

            if re==0:
                return 0
        """


        # re= self.myPositivePow(x,n)
        re= self.myPositivePow(x,n)
        if flag:
            return 1.0/re

        return re

if __name__ =="__main__":
    s=Solution()
    print s.myPow(0.00001,2147483647)
    print s.myPow(2,-21474836)
    print s.myPow(2,21474836)
    # print s.myPow(0.00001,3)
