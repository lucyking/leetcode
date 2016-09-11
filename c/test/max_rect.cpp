#include <iostream>
using namespace std;
int main(){
  int i,j;
  cin>>i;
  while(i--){
    cin>>j;
    int a[j],b[j];
    for(int k =0;k<j;k++){
      cin>>a[k];
    }
    for(int k =0;k<j;k++){
      int min = a[k];
      int s=0;
      for(int m=k;m<j;m++){
      		if(a[m]<min){
              s++;
              min=a[m];
            }
            else{
              b[k]=s;
              break;
            }
      }
      int max=0;
     for(int k =0;k<i;k++){
     	if(b[k]>max){
        max=b[k];
        } 
       }
      cout<<max<<endl;
    }

  }
}