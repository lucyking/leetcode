class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        # []: when List is empty
        if len(strs)==0:
            return ""   
        # [""]:  when only one elem in List
        if len(strs)==1:
            return strs[0]
            
        maxCP='a'*100
        
        for i in xrange(len(strs)-1):
            # print strs

            length=min(len(strs[i]),len(strs[i+1]))
            # if [""] in List,the most Comm Prefix is ""
            if length==0:    
                return "" 
            
            for j in xrange(length):
                if strs[i][j]!=strs[i+1][j]:
                    if j<len(maxCP):
                        maxCP=strs[i][:j]
                    break
                elif j==length-1:
                    if j+1<len(maxCP):
                        maxCP=strs[i][:length]
                    
        return maxCP
        
