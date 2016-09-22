//
// Created by root on 9/22/16.
//

#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        for(auto i=nums.begin();i!=nums.end();i++){
            if(*i==val) {
                nums.erase(i);
                i--;
            }
        }

        return nums.size();
    }
};

int main(){
    Solution s;
    vector<int> v={1,2,3,4,5,6,7};
    cout<<s.removeElement(v,1);

}