if __name__ == '__main__':
    l3= [[], ['A'], ['B'], ['C'], ['A', 'A'], ['A', 'B'],['A','A','A']]
    re=[]

    print ['A'] in l3
    print type(l3[-1])
    print ''.join(str(l3[-1]))

    for item in l3:
        if len(item)==3:
            re.append(item)

    print re
    # l33=filter(lambda x:len(x)!=3,l3)
    # print l33
