class Solution {
public:
    int maxNext(vector<int>& nums1, vector<int>::iterator &it1,
                vector<int>& nums2, vector<int>::iterator &it2){  //�ж���vector�еĽ�Сֵ�� 1.�����ظ�ֵ 2.˳��ָ��
                    int tmp=0;
                if(it1!=nums1.end()&&it2!=nums2.end()){   //����vector����Ϊ��
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
                
                else if(it1!=nums1.end()){   //nums2 Ϊ��
                    tmp=*it1;
                    it1++;
                }
                
                else if(it2!=nums2.end()){  //nums2Ϊ��
                    tmp=*it2;
                    it2++;
                }
                
                return tmp;                //���ؽ�С��ֵ��ָ���ֵ��iterator���ơ�
        }
                
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // map<int,int> dic;
        int index=0,sum=0;
        vector<int>::iterator it1 = nums1.begin();
        vector<int>::iterator it2 = nums2.begin();
        int length = nums1.size()+nums2.size();

        if (length%2==0){       // �����ż������ ��Ҫ��{...,[len/2],[len/2+1],...}����Ԫ�صĺ�
            while(index<length/2-1){
                index++;
                maxNext(nums1,it1,nums2,it2);   
            }
            sum+=maxNext(nums1,it1,nums2,it2);
            sum+=maxNext(nums1,it1,nums2,it2);
            return sum/2.0;
        }
        
        else{               // �������������  ��һ��Ԫ��[len/2]����
            while(index<length/2){
                index++;
                maxNext(nums1,it1,nums2,it2);   
            }
            
            return maxNext(nums1,it1,nums2,it2);
    
        }
        
    }
};