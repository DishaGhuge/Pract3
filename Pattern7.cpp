 # include <iostream>
 using namespace std;
 int main()
 {
    int iNo;
    cout<<"Enter no. of rows:";
    cin>>iNo;
    int iRow=1;
    while(iRow<=iNo)
    {
        int iCol=1;
        int iVal=iRow;
        while(iCol<=iRow)
        {
            cout<<iVal;
            iVal++;
            iCol++;
        }
        cout<<endl;
        iRow++;
    }
 }