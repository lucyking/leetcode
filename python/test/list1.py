#!/usr/bin/python

list1 = ['physics','chemstry',1997,2000];

list2 = [1,2,3,4,5,6,7];

print "list1[0]:",list1[0]

print "list2[1:5]:",list2[1:5]

list1.append('alpha');
print list1
list1.append(list2)
print list1

for item in list2:
	print item

