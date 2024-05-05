# include <iostream>
using namespace std;
// int main()
// {
//     int iNum;
//     cout<<"Enter a Number:";
//     cin>>iNum;
//     while(iNum!=0)
//     {
//         int iRem=iNum%10;
//         cout<<iRem;
//         iNum=iNum/10;
//     }
// }
int ReverseNum()
{
    int iNum;
    cout<<"Enter a Number:";
    cin>>iNum;
    int iAns=0;
    while(iNum!=0)
    {
        int iRem=iNum%10;
        iAns=(iAns*10)+iRem;
        iNum=iNum/10;
    }
    return iAns;
}
int main()
{
    int iAns=ReverseNum();
    cout<<iAns;
    return 0;
}