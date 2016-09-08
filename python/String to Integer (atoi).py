class Solution(object):
    def fix(self,n):
        if n>2147483647:
            return 2147483647
        if n<-2147483648:
            return -2147483648
        return n
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        flag=1
        str=str.strip()
        if(len(str)==0):
            return 0
        if str[0]=='+':
            flag = 1
            str=str[1:]
        elif str[0]=='-':
            flag = -1
            str=str[1:]
        re=0
        i = 0
        while(len(str)):
            if i==len(str) or str[i]==' ':
                return self.fix(re*flag)
            if ord(str[i])<ord('0') or ord(str[i])>ord('9'):
                return self.fix(re*flag)
            re = (ord(str[i])-ord('0'))+re*10
            i+=1
            
        return 0