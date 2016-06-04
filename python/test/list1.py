#!/usr/bin/python
#*********************************************#
class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        list4=[]
        for a in nums1:
            num1 = nums1.count(a)
            num2 = nums2.count(a)
            re = min(num1,num2)
            # print '>>>',re
            if re and a not in list4:
                for i in range(re):
                    list4.append(a)
        return list4
#*********************************************#




list1 = ['physics','chemstry',1997,2000,6,7]
list2 = [1,2,3,4,5,6,7]

print "list1[0]:",list1[0]

print "list2[1:5]:",list2[1:5]

list1.append('alpha')
print list1
list1.append(list2)
print list2

for item in list2:
    print item
    if item == 2:
        list2.remove(item)

for item in list1:
    print '1>',item

for item in list2:
    print '2>',item


# os._exit(0)

list3 = []
for a in list1:
    for b in list2:
        print a, ' :: ', b
        if a == b:
            print a, ' == ', b
            list3.append(a)
            list1.remove(a)
            list2.remove(a)
for k in list3:
    print '#',k


# list1 = ['physics','chemstry',1997,2000,6,7,6]
# list2 = [1,2,3,4,5,6,7,6]
list1 = [1]
list2 = [1,1]
list4 = []
for a in list1:
    num1 = list1.count(a)
    num2 = list2.count(a)
    re =  min(num1,num2)
    # print '>>>',re
    if re and a not in list4:
        for i in range(re):
            list4.append(a)

for k in list4:
    print k


