# -*- encoding:utf-8 -*-
class Solution(object):
    def subsets(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        result = [[]]
        for item in nums:
            # print item
            for j in xrange(len(result)):
            # for item  in result:    # result 动态增长，将陷入无限循环
                result.append(list(result[j]))
                # result.append(list(item))
                # print result
                # print type(result[j]),'::',type(nums[i])
                # result[-1].append(nums[i])
                result[-1].append(item)
                # print result
                # tmp = result[i].append(nums[j])
        # print result
        # print nums
        result.sort()
        return result


if __name__ == "__main__":
    print Solution().subsets([1, 2, 3])
    """
    a=[[],[]]
    b=[10,[3,4]]
    # for i in xrange(len(a)):
    #     a.append(a[i])
    #     a[-1].append(b[0])
    # print a
    a.append(a[0])
    a.append(a[0])
    print a
    a[-1].append(100)
    print a
    """

