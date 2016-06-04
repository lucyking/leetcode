#!/usr/bin/python
#*********************************************#
class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        list4=[]
        for a in nums1:
            num1 = nums1.count(a)
            num2 = nums2.count(a)
            re = min(num1,num2)
            # print '>>>',re
            if re and a not in list4:
                # for i in range(re):
                list4.append(a)
        return list4
#*********************************************#
