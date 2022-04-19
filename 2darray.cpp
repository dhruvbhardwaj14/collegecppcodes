#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
 
using namespace std;
// int main(){
// int n,m;
// cin>>n>>m;
// int a[n][m];
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < m; j++)
//     {
//         cin>>a[i][j];
//     }
    
// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < m; j++)
//     {
//         cout<<a[i][j]<<" ";
//     }
// cout<<endl;
    
// }
// cout<<endl;
// return 0;
// }

// question SPIRAL ORDER MATRIX TRAVERSAL 
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cin>>a[j][i];

        }
    }
    int row_start=0;
    int col_start=0;
    int row_end=n-1;
    int col_end=m-1;
    while (row_start<=row_end && col_start<=col_end)
    { 
        for (int i = col_start; i <= col_end; i++)
        {
            cout<<a[row_start][i]<<" ";
        }
        cout<<endl;
        row_start++;
        for (int i =row_start ; i <=row_end; i++)
        {
            cout<<a[i][col_end]<<" ";
        }
        cout<<endl;
        col_end--;
        for (int i =col_end ; i >=col_start; i--)
        {
            cout<<a[row_end][i]<<" ";
        }
        cout<<endl;
        row_end--;
        for (int i = row_end; i >= row_start; i--)
        {
            cout<<a[i][col_start]<<" ";
        }
        cout<<endl;
        col_start++;

        
    }
    // addding two matrix
    // a[i][j]
    // b[i][j]
    // c[i][j]=a[i][j]+b[i][j];
    // subtracting two matrix
    // a[i][j]
    // b[i][j]
    // c[i][j]=a[i][j]-b[i][j];
    return 0;
}
