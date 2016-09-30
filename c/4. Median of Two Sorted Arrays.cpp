class Solution {
public:
    int maxNext(vector<int>& nums1, vector<int>::iterator &it1,
                vector<int>& nums2, vector<int>::iterator &it2){  //判断两vector中的较小值： 1.并返回该值 2.顺移指针
                    int tmp=0;
                if(it1!=nums1.end()&&it2!=nums2.end()){   //两个vector都不为空
                    if(*it1>=*it2){
                        tmp=*it2;
                        it2++; 
                        //return tmp;
                    }
                    else{
                        tmp=*it1;
                        it1++;
                    }
                }
                
                else if(it1!=nums1.end()){   //nums2 为空
                    tmp=*it1;
                    it1++;
                }
                
                else if(it2!=nums2.end()){  //nums2为空
                    tmp=*it2;
                    it2++;
                }
                
                return tmp;                //返回较小的值，指向该值的iterator后移。
        }
                
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // map<int,int> dic;
        int index=0,sum=0;
        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();
        int length = nums1.size()+nums2.size();

        if (length%2==0){       // 如果是偶数长度 需要求{...,[len/2],[len/2+1],...}两个元素的和
            while(index<length/2-1){
                index++;
                maxNext(nums1,it1,nums2,it2);   
            }
            sum+=maxNext(nums1,it1,nums2,it2);
            sum+=maxNext(nums1,it1,nums2,it2);
            return sum/2.0;
        }
        
        else{               // 如果是奇数长度  求一个元素[len/2]即可
            while(index<length/2){
                index++;
                maxNext(nums1,it1,nums2,it2);   
            }
            
            return maxNext(nums1,it1,nums2,it2);
    
        }
        
    }
};