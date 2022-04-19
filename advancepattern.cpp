#include <iostream>
using namespace std;
int main()
{
    // question 1
    // int n;
    // cin>>n;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout<<(i-j+1)<<" ";
    //     }
    //     cout<<endl;
    // }

    // question 2
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i+j)%2==0)
    //         {
    //         cout<<'1';
    //         }
    //         else{
    //             cout<<'0';

    //         }
    //     }
    //     cout<<endl;

    // }

    // rhombus pattern

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <=(n-i) ; k++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j=1 ; j <= 5; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;

    // }

    // number pattern

    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <=(n-i) ; k++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int j=1 ; j <= i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }

    // palindromic pattern
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n - i); j++)
    //     {
    //         cout << ' ';
    //     }
    //     // for (int k = 1; k <= i; k++)
    //     // {
    //     //     cout<<(i-k+1)<<" ";
    //     // }
    //     for (int j = i; j >=1; j--)
    //     {
    //         cout<<j;
    //     }
        
    //     for (int k = 2; k <= i; k++)
    //     {
    //         cout<<k;
    //     }
    //  cout<<endl;

    // }

    // star pattern
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < (2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    // zigzag pattern
//     int n;
// cin>>n;
// for (int i = 1; i <= 3; i++)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         if (((i+j)%4)==0 || (i==2 && j%4==0))
//         {
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
        
//     }
//     cout<<endl;
// }

    return 0;
}