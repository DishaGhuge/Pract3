# include <iostream>
# include <math.h>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter a Decimal Number:";
    cin>>iNum;
    int iAns=0;    
    int i=0;
    while(iNum!=0)
    { 
        int bit=iNum & 1;
        iAns=(bit*pow(10,i))+iAns;
        iNum=iNum>>1;
        i++;
    }
    cout<<"Answer is: "<<iAns<<endl;
}