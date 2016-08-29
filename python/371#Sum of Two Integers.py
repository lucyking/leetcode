class Solution2(object):
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
        if a<0:
            a=~a+1
        if b<0:
            b=~b+1
        if b==0:
            return a
        sum = a^b
        carry = (a&b) << 1
        return self.getSum(sum, carry)

class Solution(object):
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
        while b:
            carry = a&b
            a ^=b
            b=carry<<1
        return a


if __name__ == '__main__':
    a = Solution()
    re = a.getSum(-1, 2)
    print re
    bit_length = 32
    neg_bit, mask = (1 << bit_length) >> 1, ~(~0 << bit_length)
    print bin(neg_bit),bin(mask)
    # print ~(~0<< 2)
    print bin(~0<<32)