class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0) return 1;
        int sum=0,num=0,max=0;
        
        map<int,int> dic;
        //用map自带的排序实现 如果key的差值不为1则return
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && dic.find(nums[i])==dic.end() ){
                dic[nums[i]]=1;
            }
        }
        
        /*
        std::cout<<endl;
        for(auto it =dic.begin();it!=dic.end();it++){
            printf("%d#",it->first); 
        }
        std::cout<<endl;
        */
        
        auto it = dic.begin();
        if(it->first!=1) return 1;
        
        for(;it!=dic.end();it++){
            auto tmp = it;
            if(it->first+1!=(++tmp)->first){ return it->first+1;}
        }
        
        
        return it->first+1;
        // int re=(1+num)*(2+num)/2-sum;
        
        // return re>0?re:1;
    }
};
