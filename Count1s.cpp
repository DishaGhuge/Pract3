class Solution
{
    public:
        int hammingWeight(uint32_t iNum)
        {
            int iCount=0;
            while(iNum!=0)
            {
                //Checking last bit
                if(iNum & 1)
                {
                    iCount++;
                }
                iNum=iNum>>1;
            }
            return iCount;
        }
};