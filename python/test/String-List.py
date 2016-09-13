# -*- encoding:utf-8 -*-
if __name__ == '__main__':
    myList= [[],['A'], ['A', 'B'],['A','B','C']]
    re=['#1']

    print ['A'] in myList
    print type(myList[-1])
    tmp = ''.join(myList[-1])
    print tmp
    print type(tmp)

    for item in myList:
        if len(item)==3:
            re+=item            # ['#1',+,+,+] 直接在末尾追加
            re.append(item)     # ['#1',[+,+,+]] 作为新的元素添加

    print '>>>',re
    
    print len([['123']]) # ->1
    print len('123') # ->3

    # myList3=filter(lambda x:len(x)!=3,myList)
    # print myList3
