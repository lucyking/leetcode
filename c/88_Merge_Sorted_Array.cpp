#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> re;
        int index_re = 0,index_1=0, index_2=0;
        if(m>n) {
            while(index_2<n) {
                if(nums1[index_1]<nums2[index_2] && index_1<m) {
                    re.push_back(nums1[index_1]);
                    ++index_1;
                }
                    /*
                    else if(nums1[index_1]==nums2[index_2]){
                        re.push_back(nums1[index_1]);
                        ++index_1;
                        ++index_2;

                    }
                    */
                else{
                    re.push_back(nums2[index_2]);
                    ++index_2;
                }
            }
            //append remainder
            while(index_1<m){
                re.push_back(nums1[index_1]);
                ++index_1;
            }
            nums1 = re;
            return;

        }else {
            while (index_1 < m) {
                if (nums1[index_1] < nums2[index_2] && index_2<n) {
                    re.push_back(nums1[index_1]);
                    ++index_1;
                }
                    /*
                    else if(nums1[index_1]==nums2[index_2]){
                        re.push_back(nums1[index_1]);
                        ++index_1;
                        ++index_2;
                    }
                    */
                else {
                    re.push_back(nums2[index_2]);
                    ++index_2;
                }
            }
            //append remainder
            while (index_2 < n) {
                re.push_back(nums2[index_2]);
                ++index_2;
//                ++index_re;
            }
            nums1 = re;
        }
    }
};


int main(){
    Solution s;
    vector<int> a,b;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);

    b.push_back(2);
    b.push_back(4);
    b.push_back(6);

    s.merge(a,3,b,3);
};