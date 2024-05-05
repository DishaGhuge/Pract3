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
        int space=iNum-iRow;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int iCol=1;
        while(iCol<=iRow)
        {
            cout<<"*";
            iCol++;
        }
        cout<<endl;
        iRow++;
    }

}