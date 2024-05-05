# include <iostream>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter value of iNum:";
    cin>>iNum;
    int i=2;
    int iCount=0;
    int iCount1=0;
    while(i<iNum)
    {
        if(iNum%i==0)
        {
            //cout<<"Not prime for "<<i<<endl;
            iCount++;
        }
        else
        {
            iCount1++;
            //cout<<"Prime for "<<i<<endl;
        }
        i=i+1;
    }
    if(iCount1==1)
    {
        cout<<iNum<<" is Prime number"<<endl;
    }
    else
    {
        cout<<iNum<<" is Not a Prime number"<<endl;

    }
}