# include <iostream>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter a number:";
    cin>>iNum;
    int mask=0;
    int iTemp=iNum;
    while(iTemp!=0)
    {
        mask=(mask<<1) | 1;
        iTemp=iTemp>>1;
    }
    int iAns=(~iNum) & mask;
    return iAns;
}
// int main()
// {
//     int iAns2=OnesCompl();
//     cout<<"1's Compliment=">>iAns2>>endl;
//     return 0;
// }