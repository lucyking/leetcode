#-*- coding:utf-8 -*-
# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        tmp = ListNode(0)
        result = ListNode(0)
        if l1 or l1:
            result.next = tmp
        else:
            result.next = None
            return result

        dex, s = 0, 0

        while l1 or l2:
            tmp.next = ListNode(0)
            tmp = tmp.next

            if l1:
                s += l1.val
                l1 = l1.next
            if l2:
                s += l2.val
                l2 = l2.next

            s += dex
            if s > 9:
                s = s % 10
                dex = 1
            else:
                dex = 0

            tmp.val = s
            s = 0
            tmp.next = None

        if dex:
            tmp.next = ListNode(1)
        return result.next.next


if __name__ == '__main__':
    a, a.next, a.next.next = ListNode(2), ListNode(4), ListNode(3)
    b, b.next, b.next.next = ListNode(5), ListNode(6), ListNode(4)
    result = Solution().addTwoNumbers(a, b)
    print "{0} -> {1} -> {2}".format(result.val, result.next.val, result.next.next.val)
    result = Solution().addTwoNumbers(None, None)
    print result.val, result.next
