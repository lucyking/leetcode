class Solution {
public:
    int sumArray(vector<int>::iterator a,vector<int>::iterator b){
        int sum=0;
        //b+=1;
        for(auto p=a;p!=b;p++){
            sum+=*p;
        }
        return sum;
            
    }
    
    int minSubArrayLen_OLD(int s, vector<int>& nums) {
        auto start = nums.begin();
        
        if(sumArray(nums.begin(),nums.end())<s) return 0;
        
        int min_len = nums.size();
        
        auto stop = ++nums.end();
        for(auto it=start;it!=stop;it++){
            while(sumArray(start,it)>=s) {
                if(distance(start,it)<min_len){
                    min_len=distance(start,it);
                }
                start++;
            }
            
        }
        
        return min_len;
        
    }
    
    
    int minSubArrayLen(int s, vector<int>& nums) {
        auto start = nums.begin();
        
        if(sumArray(nums.begin(),nums.end())<s) return 0;
        
        int min_len = nums.size();
        int sum=0;
        for(auto it=start;it!=nums.end();it++){
            sum+=*it;
            while(sum>=s) {
                if(distance(start,it)<min_len){
                    min_len=distance(start,it);
                }
                sum-=*start;
                start++;
            }
            
        }
        
        return min_len+1;
        
    }
    
};
