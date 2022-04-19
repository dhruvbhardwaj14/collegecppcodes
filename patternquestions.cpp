#include <iostream>
using namespace std;
int main()
{
// rectangle pattern 
    // int n_rows,n_columns;
    // cin >> n_rows >> n_columns;
    // for (int i = 1; i <= n_rows; i++)
    // {
    //     for (int j = 1; j <= n_columns; j++)
    //     {
    //        cout<<"*";
    //     }
    // cout<<endl;
    // }
    

    // hollow rectangle pattern 
//   int rows,columns;
//   cin>>rows>>columns;
//   for (int i = 1; i <= rows; i++)
//   {
//       if (i==1 || i==rows)
//       {
//           for (int j = 1; j <= columns; j++)
//           {
//              cout<<"*";
//           }
        
//       }
//       else{
//           for (int k = 1; k <= columns; k++)
//           {
//               if (k==1 || k==columns)
//               {
//                   cout<<"*";
//               }
//               else{
//                   cout<<" ";
//               }
//           }
          
//       }
//     cout<<endl;
//   }

// improvised short code 
// for (int i = 1; i <= rows; i++)
//   {
//     for (int j = 1; j <= columns; j++)
//     {
//         if (i==1 ||j==1||j==columns||i==rows)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
    
//     cout<<endl;
//   }
     
// Half pyramid
int n;
cin>>n;
for (int j= 1; j <=n; j++)
{
    for (int i=j; i >=1; i--)
    {
        cout<<"*";
    }
    cout<<endl;
}
// inverted half pyramid 
cin>>n;
for (int i=n; i >=1; i--)
{
    for (int j= 1; j <=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}


// 180 degree inverted half pyramid towards right
// cin>>n;
// for (int j= 1; j <=n; j++)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (j<=n-i)

//         {
//             cout<<" ";
//         }
//         else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }

// half pyramid with numbers
// int n;
// cin>>n;
// for (int i=n; i >=1; i--)
// {
//     for (int j= 1; j <=i; j++)
//     {
//         cout<<i;
//     }
//     cout<<endl;
// }

// inverted half pyramid with numbers
// int n;
// cin>>n;
// for (int j= 1; j <=n; j++)
// {
//     for (int i=j; i >=1; i--)
//     {
//         cout<<j;
//     }
//     cout<<endl;
// }

// floyd's triangle
// int n;
// int p=1;
// cin>>n;
// for (int j= 1; j <=n; j++)
// {
//     for (int i=j; i >=1; i--)
//     {
//         cout<<p<<" ";
//         ++p;
//     }
//     cout<<endl;
// }

// butterfly pattern 

// int n;
// cin>>n;
// for (int i = 1; i <= n; i++)
// {
//     for (int j= 1; j <= i; j++)
//     {
//         cout<<"*";
//     }
//     int space=2*n - 2*i;
//     for (int j = 1; j <= space; j++)
//     {
//         cout<<" ";
//     }
//     for (int j= 1; j <= i; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;

// }
// for (int i = n; i >= 1; i--)
// {
//     for (int j= 1; j <= i; j++)
//     {
//         cout<<"*";
//     }
//     int space=2*n - 2*i;
//     for (int j = 1; j <= space; j++)
//     {
//         cout<<" ";
//     }
//     for (int j= 1; j <= i; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
    
// }
  return 0;
}