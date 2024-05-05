# include <iostream>
using namespace std;
int main()
{
    int iRow;
    cout<<"Enter a number of rows:";
    cin>>iRow;
    int i=1;
    int iCount=1;
    while(i<=iRow)
    {
        int j=1;
        while(j<=iRow)
        {
            cout<<iCount<<" ";
            iCount++;
            j++;
        }
        cout<<endl;
        i++;
    }
}