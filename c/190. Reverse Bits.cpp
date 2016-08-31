class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned int re=0;
        for(int i=31;i>=0;i--){
            if(n==0)
                break;
            re=re + ((n&1)<<i);  // +- 操作优先于 << >>
            n=n>>1;
        }
        
        return re;
        
    }
};
