#include <vector>
#include <iostream>

using namespace std;
using namespace std;
class Solution {
public:
    bool runOut(vector<int>& ref){
        if(ref.back()==0)
            return true;
        return false;

    }

    bool runOut_index(int N, int cnt){
        if(cnt>=N)
            return true;
        return false;
    }

    void appendRe(vector<int>& re, vector<int> ref, int index){
        while(ref[index]!=0){
            re.push_back(ref[index]);
            ++index;
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> re;
        int index_re = 0,index_1=0, index_2=0;
        int flag=0;

        // if(n==0 || m==0){
        if((n&&m)==0){
            if(m==0){
                nums1 = nums2;
            }
            if(n==0){
                nums1 = nums1;
            }
            return;
        }



        while(index_1<m && index_2<n) {
            if(nums1[index_1]<nums2[index_2]) {
                re.push_back(nums1[index_1]);
                ++index_1;
//                if(runOut(nums1)){
                if(runOut_index(m,index_1)){
                    flag = 1;
                }

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
//                if(runOut(nums2)){
                if(runOut_index(n,index_2)){
                    flag = 2;
                }
            }
        }

        if(flag == 1){
            appendRe(re,nums2,index_2);
        }
        else if(flag == 2){
            appendRe(re,nums1,index_1);
        }


        nums1 = re;
        return;


    }
};


int main(){
    Solution s;
    vector<int> a,b;
    a.push_back(2);
    a.push_back(0);
//    a.push_back(5);

    b.push_back(1);
//    b.push_back(4);
//    b.push_back(6);

    s.merge(a,1,b,1);
    std::cout<<"kkk";
};