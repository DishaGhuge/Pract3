# include <iostream>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter a number of rows:";
    cin>>iNum;
    int iRow=1;
    int iCount=1;
    while(iRow<=iNum)
    {
        int iCol=1;
        while(iCol<=iRow)
        {
            cout<<iCount<<" ";
            iCount++;
            iCol++;
        }
        cout<<endl;
        iRow++;
    }
}