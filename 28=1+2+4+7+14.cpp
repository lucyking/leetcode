#include <iostream>
#include<set>
using namespace std;
int perfectNumberCheck(int num){
    if(num==0||num==1) return 0;
    
    set<int> s;
    int sum=0;
    
    for(int i = 2;i<num;i++){
        if(num%i==0){
            s.insert(i);
            // if(i!=1)
                s.insert(num%i);
        }
    }
    
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<"%";
        sum+=*it;
    }
    
    cout <<sum;
    // sum+=1;
    cout<<"sum："<<sum<<endl;
    cout<<"num："<<num<<endl;
    return (sum+1)==num?1:0;
    /*
    if(sum==num) return 1;
    return 0;
    */
}


int main(){
    int re=perfectNumberCheck(28);
    cout <<"re:"<<re<<endl;
    // cout<<p(28);
        re=perfectNumberCheck(0);
    cout <<"re:"<<re<<endl;
}
