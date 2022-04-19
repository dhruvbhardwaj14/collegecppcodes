#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
 
using namespace std;
// transpose of a matrix
// int main(){
// int n;
// cin>>n;
// int a[n][n];
// for (int i = 0; i < n; i++)
// {
// for (int j = 0; j < n; j++)
// {
//     cin>>a[i][j];
// }
// }
// for (int i = 0; i < n; i++)
// {
// for (int j = 0; j < n; j++)
// {
//     cout<<a[j][i]<<" ";
// }
// cout<<endl;
// }

// return 0;
// }

// multiplication of matrices 
// int main(){
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int a[n1][n2];
//     int b[n2][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>a[i][j];
//         }
        
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin>>b[i][j];
//         }
        
//     }
//     int prod=1;
//     int mult[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             mult[i][j]=0;
//         }
//     }
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 mult[i][j]+=a[i][k]*b[k][j ];
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n1; i++)
//     {
//      for (int j = 0; j < n3; j++)
//      {
//           cout<<mult[i][j]<<" ";
//      }
//     cout<<endl;
// }
//     return 0;
// }

// question 2D MATRIX SEARCH 
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int target;
    cin>>target;
    bool flag=false;
    int r=0;
    int c=m-1;
    while (r<n && c>=0)
    {
       if (a[r][c]==target)
       {
           cout<<r<<c<<" ";
           flag=true;
       }
       if (a[r][c]>target)
       {
           c--;
       }
       else{
           r++;
       }
    }
    if (flag)
    {
     cout<<"element found"<<endl;  
    }
    else{
        cout<<"Element not found"<<endl;
    }
    
    return 0;
}