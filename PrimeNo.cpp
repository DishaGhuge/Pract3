# include <iostream>
using namespace std;
int main()
{
    int iNum;
    cout<<"Enter a number to check prime or not:";
    cin>>iNum;
    bool isPrime=1;
    for(int i=2;i<iNum;i++){
        if(iNum%i==0)   
        {
           // cout<<"Not a Prime Number";
           isPrime=0;
            break;  
        }
        // else
        // {
        //     cout<<"Prime Number";
        //     break;
        // }
        
    }
    if(isPrime==0)
        {
            cout<<"Not a prime number";
        }
        else{
            cout<<"Prime number";
        }
    return 0;

}