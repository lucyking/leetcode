class Solution(object):
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        dic=dict()
        l=str.split()
        if len(l)!=len(pattern):
            return False
        """
        for i in xrange(len(pattern)):
            if not pattern[i] in dic.keys():
                dic[pattern[i]]=l[i]
            else:
                if not dic[pattern[i]]==l[i]:
                    return False
        """   
        for i in xrange(len(l)):
            if not l[i] in dic.keys():
                dic[l[i]]=pattern[i]
            else:
                if not dic[l[i]]==pattern[i]:
                    return False    
                    
        if len(set(dic.keys()))!=len(set(dic.values())):   # filter:[ "abba"::"dog cat cat fish"  /  "abba" :: "dog dog dog dog" ]
            return False
        
        return True
