#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        long int result = 0;
        bool is_pos = true;
        if (x < 0) {
            is_pos = false;
            x = -x;
        }
        while (x >= 1) {
            result = result * 10 + x % 10;
            x = x / 10;
        }

        if(result > INT32_MAX )                       // <-- overflow filter
            return -1;
        result = (int)result;

        return is_pos ? result : -result;
    }
};

int main() {
    cout << "Hello, World!" << endl;

    Solution Alpha;
    cout << INT32_MAX <<endl;
    cout << Alpha.reverse(100) <<endl;
    cout << Alpha.reverse(101) <<endl;
    cout << Alpha.reverse(-101) <<endl;
    cout << Alpha.reverse(1534236469) <<endl;        // <--signned int overflow
    return 0;
}
