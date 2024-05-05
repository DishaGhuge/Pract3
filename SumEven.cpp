# include <iostream>
using namespace std;
int main()
{
    int iNum;
    int iSum=0;
    cout<<"Enter a value of iNum:";
    cin>>iNum;
    for(int i=1;i<=iNum;i++)
    {
        iSum=iSum+i;
    }
    cout<<"Sum of all natural numbers upto\t"<<iNum<<"\tis:"<<iSum<<endl;

}