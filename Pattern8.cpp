# include <iostream>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter Number of rows you want:";
    cin>>iNum;
    int iRow=1;
    while(iRow<=iNum)
    {
        int iCol=1;
        while(iCol<=iRow)
        {
            cout<<iRow-iCol+1<<" ";
            iCol++;
        }
        cout<<endl;
        iRow++;
    }

}