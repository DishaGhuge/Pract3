# include <iostream>
using namespace std;
int fibonacci(int iNo)
{
    int a,b;
    cout<<"Enter starting 2 numbers:";
    cin>>a>>b;
    int iSum=0;
    for(int i=1;i<=iNo;i++)
    {
        iSum=a+b;
        cout<<iSum<<" ";

        a=b;
        b=iSum;
        
    }
}
int main()
{
    int iNum;
    cout<<"Enter a number:";
    cin>>iNum;
    fibonacci(iNum);
}