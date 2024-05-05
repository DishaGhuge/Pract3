# include <iostream>
using namespace std;
int main()
{
    int iAmount;
    cout<<"Enter a amount:";
    cin>>iAmount;
    int Rs100,Rs50,Rs20,Rs1;
    int choice;
    // cout<<"Enter your choice:";
    // cin>>choice;
    switch(1)
    {
        case 1:Rs100=iAmount/100;
                iAmount=iAmount%100;
                cout<<"no of 100 Rupee="<<Rs100<<endl;

        case 2:Rs50=iAmount/50;
                iAmount=iAmount%50;
                cout<<"no of 50 Rupee="<<Rs50<<endl;

        case 3:Rs20=iAmount/20;
                iAmount=iAmount%20;
                cout<<"no of 20 Rupee="<<Rs20<<endl;

        case 4:Rs1=iAmount/1;
                iAmount=iAmount%1;
                cout<<"no of 1 Rupee="<<Rs1<<endl;
                break;

        default:cout<<"Something gonna wrong";
    }
    return 0;
}