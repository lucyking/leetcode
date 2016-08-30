class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==0)
            return 0;
        if(m==1 && n==1)
            return 1;
        if(n/m>=2)
            return 0;
        //return pow(2,sqrt(m));
        
        //int re=m;
        for(long int i=m;i<=n;i++)  // because <INT32_MAX+1> will overflow
            m=m&i;
        
        return m;
    }
};
