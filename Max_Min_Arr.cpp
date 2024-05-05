# include <iostream>
using namespace std;
int Max_Ele(int iNum[],int iSize)
{
    int iMax=iNum[0];
    for(int i=0;i<iSize;i++)
    {
        if(iNum[i]>iMax)
        {
            iMax=iNum[i];
        }
    }
    return iMax;
}
int Min_Ele(int iNum[],int iSize)
{
    int iMin=iNum[0];
    for(int i=0;i<iSize;i++)
    {
        if(iNum[i]<iMin)
        {
            iMin=iNum[i];
        }
    }
    return iMin;
}
int main()
{   int iSize;
    int iNum[100];
    cout<<"Enter Array size:";
    cin>>iSize;
    cout<<"Enter elements in array:"<<endl;
    for(int i=0;i<iSize;i++)
    {
        cin>>iNum[i];
    }

    cout<<"Array elements are:";
    for(int i=0;i<iSize;i++)
    {
        cout<<iNum[i]<<" ";
    }

    int iMax=Max_Ele(iNum,iSize);
    int iMin=Min_Ele(iNum,iSize);

    cout<<endl<<"Maximum element="<<iMax<<endl;
    cout<<"Minimum element="<<iMin;


    return 0;

}