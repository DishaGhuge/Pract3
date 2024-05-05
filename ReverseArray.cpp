# include <iostream>
using namespace std;
void reverseArray(int iArr[],int iSize)
{
    // for(int i=iSize-1;i>=0;i--)
    // {
    //     cout<<iArr[i]<<" ";
    // }
    int start=0;
    int end=iSize-1;

    while(start<=end)
    {
        swap(iArr[start],iArr[end]);
        start++;
        end--;
    }
    
    cout<<"Reverse Array:"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cout<<iArr[i]<<" ";
    }
}
int main()
{
    int iArr[100];
    int iSize;
    cout<<"Enter size of array:";
    cin>>iSize;
    cout<<"Enter elements in array:"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cin>>iArr[i];
    }
    reverseArray(iArr,iSize);
    return 0;
}