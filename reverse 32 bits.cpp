class Solution {
public:
    bool ifkthbitisset(int k,uint32_t A)
    {
        if(((1<<(k-1))&A)!=NULL)
            return true;
        return false;
    }
    uint32_t reverseBits(uint32_t n) {
        unsigned int ans=0;
        for(int i=1;i<=32;i++)
        {
            if(ifkthbitisset(i,n))
            {
                ans|=1<<(32-i);
            }
        }
        
        return ans;
    }
};
