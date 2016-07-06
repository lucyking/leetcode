#include <iostream>
#include <stdio.h>

using namespace std;
class Solution{
public:	
	bool isPalindrome(int x){
		int store = x;
		//int re = x;
		int re = 0;
		while(x>0){
			re=re*10+x%10;
			x=x/10;
		}
		printf("src:%d re:%d\n",store,re);
		return store==re?true:false;
	}
};

int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    cout<<a.isPalindrome(100)<<endl;
    cout<<a.isPalindrome(101)<<endl;
}
