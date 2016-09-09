class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        d=dict()
        for item in strs:
            # re=list()
            # for c in item:
                # re.append(c)
            re=list(item)
            # print re
            re = sorted(re)
            # print re
            re=str(re)
            
            
            if d.has_key(re):
                d[re].append(item)
            else:
                d[re]=[]
                d[re].append(item)
            
        # print d
        re=d.values()
        return re
        

