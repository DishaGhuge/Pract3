# include <iostream>
using namespace std;
bool evenOdd(int iNum)
{
    if(iNum%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iNum;
    cout<<"Enter a number:";
    cin>>iNum;
    int iAns=evenOdd(iNum);
    if(iAns==1)
    {
        cout<<iNum<<" is Even Number";
    }
    else
    {
        cout<<iNum<<" is Odd Number";
    }
    
}