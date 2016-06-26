#include <iostream>

using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int sum=0;
        if(n==0)
            return 1;   // <-- special condition
        if(n==1)
            sum = f(1); // <-- special condition
        else{
            for(int i=1;i<=n;i++){
                sum+=f(i);
            }
        }

        return sum;

    }

    int f(int n){
        if(n==1)
            return 10;
        else {
            n = n - 2;
            int tmp = 9;
            while (n >= 0) {
                tmp *= 9 - n;
                n=n-1;
            }
            return tmp;
        }


    }
};

int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    for(int i=1;i<=10;i++)
        cout << a.countNumbersWithUniqueDigits(i) << endl;

    return 0;
}