class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> dic;
        for(int i=0;i<nums.size();i++){
            if(dic.find(nums[i])==dic.end()){
                dic[nums[i]]=1;
            }
            else{
                return nums[i];
            }
        }
        
    return -1;
    }
};
