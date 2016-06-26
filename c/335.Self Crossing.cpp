#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSelfCrossing(vector<int>& x) {
        cout<<x.size();
        for(int i=3;i<x.size();i++){
            if(i>=3 && x[i] >= x[i-2] && x[i-1] <= x[i-3]   )
                return true;
            if(i>=4 && x[i-1]== x[i-3] && (x[i]+x[i-4])>=x[i-2])
                return true;
            if(i>=5 &&x[i-2]> x[i-4] && (x[i]+x[i-4])>=x[i-2] && x[i-3] > x[i-5] && (x[i-1]+x[i-5])>= x[i-3]  && x[i-1]<x[i-3])
                return true;

        }
        return false;

    }
};

int main() {
    cout << "Hello, World!" << endl;
    vector<int> alpha = {1,2,3,4};
    vector<int> beta = {1,1,1,1};
    Solution a;
    cout << a.isSelfCrossing(alpha);
    cout << a.isSelfCrossing(beta);
    return 0;
}