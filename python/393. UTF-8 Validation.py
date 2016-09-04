class Solution(object):
    def validUtf8(self, data):
        """
        :type data: List[int]
        :rtype: bool
        """
        # if(len(data)==0):
        #     return True
        # for i in xrange(0,len(data)):    # static range
        while len(data):
            # if len(data)==0:
            #     return True
            i=0
            # print i
            if (data[i]&0b11110000)==0xF0:
                if (len(data)<4): return False
                for j in xrange(1,4):
                    if data[j]&(0b10<<6)!=(0b10<<6):
                        return False
                data=data[4:]
                if len(data)==0:
                    return True
                else:
                    continue
                # return self.validUtf8(data[4:])

            elif data[i]&(0b1110<<4)==(0b1110<<4):
                if (len(data)<3): return False
                for j in xrange(1,3):
                    if data[j]&(0b10<<6)!=(0b10<<6):
                        return False
                data = data[3:]
                if len(data)==0:
                    return True
                continue
                # return self.validUtf8(data[3:])

            elif data[i]&(0b1100<<4)==(0b1100<<4):
                if (len(data)<2): return False
                for j in xrange(1,2):
                    if data[j]&(0b10<<6)!=(0b10<<6):
                        return False
                data = data[2:]
                if len(data)==0:
                    return True
                continue
                # return self.validUtf8(data[2:])

            elif (data[i]>>7)&1==0:
                data=data[1:]
                if len(data)==0:
                    return True
                continue
                # return self.validUtf8(data[1:])

            return False
if __name__ =='__main__':
    a= Solution()
    print a.validUtf8([197,130,1])
    print a.validUtf8([235,140,4])

