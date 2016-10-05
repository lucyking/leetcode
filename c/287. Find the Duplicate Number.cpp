class Solution_dict {
public:
    int findDuplicate(vector<int>& nums) {
	//using dict 
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

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
	//using Set<int>
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
            }
            else{
                return nums[i];
            }
        }
        
    return -1;
    }
};
