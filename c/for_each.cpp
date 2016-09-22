#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void pr(int& k){
    cout<< k<< " ";
}

int main() {
    vector<int> v = {0,1,2,3};
    for_each(v.begin(),v.end(),pr);
    return 0;
}