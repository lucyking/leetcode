# -*- encoding:utf8 -*-
class Solution(object):

    def mySqrt(self, x):
        """
        [left,right] 左右同时趋近目标值
        :type x: int
        :rtype: int
        """
        if x<2:
            return x

        left,right=1,x/2
        while left<=right:
            mid =left+(right-left)/2
            if mid*mid>x:
                right=mid-1       # mid-1  不包含mid
            else:
                left=mid+1       # mid+1  不包含mid

        return left-1
