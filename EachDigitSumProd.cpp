# include <iostream>
using namespace std;
int SumProdDiff()
{
    int iNum;
    cout<<"Enter a number:";
    cin>>iNum;
    int iProd=1;
    int iSum=0;
    while(iNum!=0)
    {
        int iRem=iNum%10;
        iProd=iProd*iRem;
        iSum=iSum+iRem;
        iNum=iNum/10;
    }
    int iDiff=iProd-iSum;
    return iDiff;
}
int main()
{
    int iAns=SumProdDiff();
    cout<<iAns;
    return 0;
}