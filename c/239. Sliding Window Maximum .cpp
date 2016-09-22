//
// Created by root on 9/23/16.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums,int k){
        deque<int> dq;
        vector<int> re;
        for(int i=0;i<nums.size();i++){

            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.emplace_back(i);

            if(i-dq.front()>=k && !dq.empty() )  dq.pop_front();

            if(i>=k-1) re.push_back(nums[dq.front()]);
        }
    }
};
