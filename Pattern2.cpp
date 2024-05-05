# include <iostream>
using namespace std;
int main()
{
    int iRow;
    cout<<"Enter number of rows:";
    cin>>iRow;
    int i=1;
    while(i<=iRow)
    {
        int j=1;
        while(j<=iRow)
        {
            cout<<iRow-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}