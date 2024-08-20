// #include<iostream>
// #include<cmath>
// #include"bits/stdc++.h"
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
// int n,k,r,c;
// cin>>n>>k>>r>>c;
// char a[n+1][n+1];
// for (int i = 1; i <=n; i++)
// {
//     for (int j = 1; j <=n; j++)
//     {
//         a[i][j]='.';
//     }
// }
// for (int i = 1; i <=n; i++)
// {
//     for (int j = 1; j <=n; j++)
//     {
//         if ((i+j)%k==(r+c)%k)
//         {
//             a[i][j]='X';
//         }
        
//     }
// }
// for (int i = 1; i <=n; i++)
// {
//     for (int j = 1; j <=n; j++)
//     {
//         cout<<a[i][j];        
//     }
//             cout<<endl;
// }

// }
// return 0;
// }
#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n,k,r,c;
    cin>>n>>k>>r>>c;
    char a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]='.';
        }
        
    }
    int x=r-1,y=c-1;
    while (x>=0)
    {
        for (int i = y; i < n; i+=k)
        {
            a[x][i]='X';
        }
        for (int i = y; i >=0; i-=k)
        {
            a[x][i]='X';
        }
        x=x-1;
        y=y+1;
        if (y>=n)
        {
            y=0;
        }
    }
    x=r-1,y=c-1;
    while (x<n)
    {
        for (int i = y; i < n; i+=k)
        {
            a[x][i]='X';
        }
        for (int i = y; i >=0; i-=k)
        {
            a[x][i]='X';
        }
        x=x+1;
        y=y-1;
        if (y<0)
        {
            y=n-1;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
}
return 0;
}