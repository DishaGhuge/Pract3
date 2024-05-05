# include <iostream>
using namespace std;
int CountOnes(uint32_t);
int main()
{
    int iAns=CountOnes(uint32_t iNum);
    cout<<"Number of 1's="<<iAns;
    return 0;
}
public:
int CountOnes(uint32_t iNum)
{
    int iCount=0;
    cout<<"Enter a number:";
    cin>>iNum;
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

};