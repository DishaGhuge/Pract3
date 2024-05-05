# include <iostream>
using namespace std;
void unique_Ele(int iArr[],int iSize)
{
    //int temp,i;
    //int j=0;
    cout<<endl<<"Unique elements are: "<<endl;
    int iAns=0;
    for(int i=0;i<iSize;i++)
    {
        iAns=iAns^iArr[i];
    //     if(iArr[j]==iArr[i])
    //     {
    //         temp++;
    //         j++;

    //     }
    // }
    // if(temp==0)
    // {
    //     cout<<iArr[j];
    // }
    }
    cout<<iAns;
}
int main()
{
     int iArr[100];
    int iSize;
    cout<<"Enter size of array: ";
    cin>>iSize;
    cout<<"Enter elements in array: ";
    for(int i=0;i<iSize;i++)
    {
        cin>>iArr[i];
    }

    cout<<"Array elements are: ";
    for(int i=0;i<iSize;i++)
    {
        cout<<iArr[i]<<"\t";
    }

    unique_Ele(iArr,iSize);
    return 0;
}