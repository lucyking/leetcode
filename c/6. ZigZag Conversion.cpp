#include <iostream>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string re;
        for (int i = 0; i < numRows; ++i) {
            re+=fx(s,numRows,i);
        }

//        re+=fx(s,)
        return re;

    }

    string fx(string str,int n,int k){
        string tmp;
        int strap = (n-k-1)*2;
        if(strap==0)
            strap=(n-1)*2;

        if(k==0||k==n-1){
            for (int i = k; i < str.size();i+=2*(n-1)) {
                tmp += str[i];
            }
        }
        else {
            bool flag = false;
            for (int i = k; i < str.size();) {
                tmp += str[i];
                if (flag == false) {
                    i += strap;
                    flag = true;
                }
                else {
                    i += 2 *k ;
                    flag = false;
                }
            }
        }
        return tmp;

    }
};

int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    cout << a.convert("PAYPALISHIRING",4);
    return 0;
}