class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        d = {}
        for item in set(nums):
            d[item] = nums.count(item)

        re = sorted(d.iteritems(),key=lambda d:d[1],reverse=True)
        re = map(lambda x:x[0],re)
        return re[:k]

if __name__ == '__main__':
    a = Solution()
    lst = [5,1,1,1,1,2,2,3]
    l2 = [4,1,-1,2,-1,2,3]
    new_lst = list(set(l2))
    # new_lst.sort(l2.index)
    print new_lst
    # print sorted(l2,key=l2.count)
    # print set(l2)
    a.topKFrequent(lst,2)
    a.topKFrequent(l2,2)

    print '*'*50
    lst = [5,1,1,1,1,2,2,3]
    lst2 = [4,1,-1,2,-1,2,3]
    d = {}
    for item in set(lst2):
            d[item] = lst2.count(item)
    re = sorted(d.iteritems(),key=lambda d:d[1],reverse=True)
    print re
    print type(re)
    print map(lambda re:re[0],re)

