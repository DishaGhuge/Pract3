# include <iostream>
using namespace std;
int arraySum(int, int);
int arraySum(int iArr[],int iSize)
{
    int iSum=0;
    for(int i=0;i<iSize;i++)
    {
        iSum=iSum+iArr[i];
    }
    return iSum;
}
int main()
{
    int iArr[100];
    int iSize;
    cout<<"Enter the size of array:";
    cin>>iSize;
    cout<<"Enter elements in array:"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cin>>iArr[i];
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cout<<iArr[i]<<" ";
    }
    int iAns=arraySum(iArr,iSize);
    cout<<endl<<"Sum of all elements in array:"<<iAns;
    return 0;
}