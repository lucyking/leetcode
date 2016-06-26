#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
//        for (int i = 0; i <nums.size() ; ++i) {
//            cout << nums[i];
//        }
//            nums[0]^=nums[i];
//        }
        int tmp;
        tmp = nums.back();
        nums.pop_back();
        while(nums.size()>0){
            tmp^=nums.back();
            nums.pop_back();
        }
//        return nums[0];
        return tmp;


    }
};

int main() {
    cout << "Hello, World!" << endl;
    Solution a;
    vector<int> vint = {1,2,3,1,2,3,5};
    cout << a.singleNumber(vint);
    return 0;
}