class Solution(object):
    def intToRoman(self,num):
        dic = {  1:"I",  4:"IV",  5:"V",  9:"IX",
                10:"X", 40:"XL", 50:"L", 90:"XC",
               100:"C",400:"CD",500:"D",900:"CM",
               1000:"M"}

        s=""
        while num>0:
            for k in reversed(sorted(dic.keys())):
                while num/k > 0:
                    s+=dic[k]
                    num-=k
        return s


if __name__ == '__main__':
    s=Solution()
    print s.intToRoman(10)
    print s.intToRoman(3549)
    # print s.intToRoman(10).dic
    """
    dic = {  1:"I",  4:"IV",  5:"V",  9:"IX",
    10:"X", 40:"XL", 50:"L", 90:"XC",
    100:"C",400:"CD",500:"D",900:"CM",
    1000:"M"}
    print reversed(sorted(dic))
    l=sorted(dic)
    print l
    l.reverse()
    print l
    """
