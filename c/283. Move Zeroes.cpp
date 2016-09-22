//
// Created by root on 9/22/16.
//
#include<vector>
#include <iostream>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if (*it == 0) {
                nums.erase(it);

            }

            }
        }
        /*
        int left=0,right=nums.size();

        for(;left<right;left++ ) {
            if (nums[left] == 0) {
                for(int i = left;i<left-1;i++){
                    swap(nums[i], nums[i+1]);
                }
            }
        }



    }
         */
    };

    int main() {
        Solution s;
        vector<int> vi = {1, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9};
        s.moveZeroes(vi);
        for (auto it = vi.begin(); it != vi.end(); it++) {
            cout << *it << " ";
        }
    }