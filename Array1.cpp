# include <iostream>
using namespace std;
void printArray(int iArr[],int size)
{
    for(int i=0;i<size;i++)
     {
        cout<<iArr[i]<<endl;
     }
}
int main()
{
     int iArr[10]={1};
     
    int iNumber[10]={1,2,3,4,5,6,7,8,9,0};
    // cout<<iNumber[0]<<endl;
    // cout<<iNumber[10]<<endl;
    // cout<<iNumber[300]<<endl;
    int iSize;
    cout<<"Enter the size of array:";
    cin>>iSize;
    printArray(iArr,iSize);
    // printArray(2,10);
    printArray(iNumber,iSize);

    return 0;
}