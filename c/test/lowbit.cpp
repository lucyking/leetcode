
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    int sum=1;
    
    while (cin >> k) {
        if(k==0) return -1;
        k=k&-k;
        cout<<log(k)/log(2);
    }
}
