# include <iostream>
using namespace std;
int main()
{
    int iRow;
    cout<<"Enter value of row:";
    cin>>iRow;
    int i=1;
    while(i<=iRow)
    {
        int j=1;
        while(j<=iRow)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}