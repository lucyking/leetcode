#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> re;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    re = {i, j};
                    return re;
                }
            }
        }
        re = {};
        return re;
    }
};

int main() {
    Solution a;
    vector<int> src = {3, 2, 4};

    vector<int> re = a.twoSum(src, 6);
    for (vector<int>::iterator i = re.begin(); i != re.end(); i++)
        cout << *i;
    return 0;
}