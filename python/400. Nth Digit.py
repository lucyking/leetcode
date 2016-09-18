	class Solution(object):
    def findNthDigit(self, n):
        """
        :type n: int
        :rtype: int
        """
        s,k = 0,9
        s=0
        i=1
    
        while(n>k*i):
            s+=k*i
            i+=1
            k=k*10
            
        index=(n-s-1)/i
        
        number=k/9+index
        
        bit = (n-s)%i
        
        if bit==0:
            return number%10
            
        else:
            bit=i-bit
            while(bit>0):
                bit-=1
                number=number/10
                re=number%10
            return re
