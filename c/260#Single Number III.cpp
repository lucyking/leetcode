class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        val_xor=0
        for n in nums:
            val_xor ^= n
            
        lowbit=val_xor & (-val_xor)
        
        a=b=0
        
        for n in nums:
            if (n&lowbit):
                a^=n
            else:
                b^=n
        return [a,b]
