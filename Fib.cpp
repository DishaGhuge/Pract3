# include <iostream>
using namespace std;
int main()
{
    int n=10;
    int a=0;
    int b=1;

    for(int i=0;i<10;i++)
    {
        int next_Num=a+b;
        cout<<next_Num<<endl;

        a=b;
        b=next_Num;
    }
    return 0;
}
