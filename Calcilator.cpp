# include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
        //int choice;
        char choice;
        cout<<"Enter your choice:";
        cin>>choice;
            switch(choice)
            {
                case '+':cout<<a+b;
                    break;
                case '-':cout<<a-b;
                    break;
                case '*':cout<<a*b;
                    break;
                case '/':cout<<a/b;
                    break;
                case '%':cout<<a%b;
                    break;
                default:cout<<"Enter valid choice!";
            }
            
    return 0;
}