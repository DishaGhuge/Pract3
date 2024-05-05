// # include <iostream>
// # include <math.h>
// using namespace std;
// int main()
// {
//     int iNum;
//     cout<<"Enter a number:";
//     cin>>iNum;
//     for(int i=0;i<=30;i++)
//     {
//         int ans=pow(2,i);
//         if(ans==iNum)
//         {
//             return true;
//         }
//     }
//     return false;
// }
class Solution{
    public:
    bool isPowerOfTwo(int n)
    {
        for(int i=0;i<=30;i++)
        {
        int ans=pow(2,i);
        if(ans==n)
        {
            return true;
        }
        }
    return false;
    }
};