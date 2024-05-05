# include <iostream>
using namespace std;
bool search(int iArr[],int iSize,int iNum)
{
    for(int i=0;i<iSize;i++)
    {
        if(iArr[i]==iNum)
        {
            return 1;
        }
    }
    return 0;
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
    int iNum;
    cout<<"Enter a number to be search in array:";
    cin>>iNum;
    bool isrch=search(iArr,iSize,iNum);
    if(isrch==1)
    {
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found";
    }
    return 0;
}