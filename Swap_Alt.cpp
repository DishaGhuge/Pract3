# include <iostream>
using namespace std;
void swap_Alt(int iArr[],int iSize)
{
    int temp,i;
    for(i=0;i<iSize;i+=2)
    {
        if(i+1<iSize)
        {
            swap(iArr[i],iArr[i+1]);

        }
        
    }
    cout<<endl<<"Swap Array elements alternately are: "<<endl;
    for(int i=0;i<iSize;i++)
    {
        cout<<iArr[i]<<"\t";
    }

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

    swap_Alt(iArr,iSize);

    return 0;
}
