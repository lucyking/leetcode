// #include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int *p,*q;
    int k[5]={1,2,3,4,5};
    p=k;
    q=p;
    printf("%x,%x\n",q,p);
    p++;
    
    printf("%x,%x\n",q,p);
    p+=1;
    printf("%x,%x\n",q,p);
    
}