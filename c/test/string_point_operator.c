#include<stdio.h>
#include <string.h>
int main(){
	char* s="aaa",*left,*right;
	left=s,right=s;
	while(*right!='\0'){
		printf("%c:%d\n",*right,right);
		right++;
	}
	printf("%c:%d\n",*right,right);
	printf("%c:%d\n",'\0',right);

	printf("cout<<'\0'");
	putchar('\0');
	putchar('\0');
	printf("cout<<'\0'");

	printf("%s\n",s);

	//int length = sizeof(*s);
	int length = (right-left)/sizeof(*s);
	printf("SIZE::%d\n",length);


	char *cur = s+64;
	printf("%d\n",cur);
	printf("%d\n",cur-s);
}
