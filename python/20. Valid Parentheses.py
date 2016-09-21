class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        dic = {'(':')','[':']','{':'}'}
        left = ['(','[','{']
        right = [')',']','}']
        stack = ''
        for item in s:
            if item in left:
                stack+=item
                continue
            if item in right:
                if len(stack)==0:
                    return False
                if dic[stack[-1]]==item:
                    stack=stack[:-1]
                else:
                    return False
                    
        if len(stack)!=0:
            return False
        return True
