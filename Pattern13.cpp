# include <iostream>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter Number of rows you want:";
    cin>>iNum;
    int iRow=1;
    //char ch='A';
    while(iRow<=iNum)
    {
        int iCol=1;
        while(iCol<=iRow)
        {
            char ch='A'+iCol+iRow-2;
            cout<<ch<<" ";
            //ch++;
            iCol++;
        }
        cout<<endl;
        iRow++;
    }

}