# include <iostream>
using namespace std;
int power(int x,int y)
{
    int i=1;
    int iPow=1;
    for(i=1;i<=y;i++)
    {
        iPow=iPow*x;
    }
    return iPow;
}
int main()
{
    int a,b;
    cout<<"Enter 2 values:";
    cin>>a>>b;
    int iAns=power(a,b);
    cout<<a<<" to the Power "<<b<<"="<<iAns;
    return 0;
}