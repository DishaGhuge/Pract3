# include <iostream>
using namespace std;
int nCr(int ,int);
int factorial(int);
int factorial(int iNum)
{
    int iFact=1;
    for(int i=1;i<=iNum;i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}
int nCr(int n,int r)
{
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int nCr=num/denom;
    return nCr;
}
int main()
{
    int n,r,iAns;
    cout<<"Enter value of n and r:";
    cin>>n>>r;
    iAns=nCr(n,r);
    cout<<n<<"C"<<r<<"="<<iAns;
    return 0;
}