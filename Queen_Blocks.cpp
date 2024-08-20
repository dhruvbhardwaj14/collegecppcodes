#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int p,b;
       cin>>p>>b;
       int a[8][8];
       int x=p-1;
       int y=b-1;
       for (int i = 0; i < 8; i++)
       {
           for (int j = 0; j < 8; j++)
           {
               a[i][j]=0;
           }
       }
       a[x][y]=1;
       if ((x==0 || x==7)&&(y==0||y==7))
       {
           a[abs(x-1)][abs(y-2)]=2;
       }
       else if((x==0 || x==7||y==0||y==7)){
           if (x==0 || x==7)
           {
               a[abs(x-2)][y-1]=2;
               a[abs(x-2)][y+1]=2;
           }
           else if(y==0 || y==7){
               a[x-1][abs(y-2)]=2;
               a[x+1][abs(y-2)]=2;
           }
       }
       else{
           if (x>2)     
           {
               if (y>1)
               {
                   a[x+1][y-2]=2;
                   a[x-3][y+1]=2;
               }
               else{
                   a[x-3][y-1]=2;
                   a[x+1][y+2]=2;
               }
           }
           else{
               if (y>1)
               {
                   a[x-1][y-2]=2;
                   a[x+3][y+1]=2;
               }
               else{
                   a[x+3][y-1]=2;
                   a[x-1][y+2]=2;
               }
           }
           
       }

       for (int i = 0; i < 8; i++)
       {
           for (int j = 0; j < 8; j++)
           {
              cout<<a[i][j]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}