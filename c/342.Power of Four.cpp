#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1)
            return true;
        if(num<=0 || num%4!=0)
            return false;
        double re =log(num)/log(2);
//        cout << re;
        if(re==int(re))
            re= int(re)%2;
        return re==0?true:false;


    }
};


int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    cout <<a.isPowerOfFour(20) << endl;
//    cout <<a.isPowerOfFour(16) << endl;
//    cout <<a.isPowerOfFour(32) << endl;
//    cout <<a.isPowerOfFour(64) << endl;
//    cout <<a.isPowerOfFour(128) << endl;
//    cout <<a.isPowerOfFour(256) << endl;
    return 0;
}