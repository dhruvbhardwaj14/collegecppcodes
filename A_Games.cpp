#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][2];
    int host=0;
    int guest=0;
    int count=0;
    for (int i=0; i < n; i++)
    {
         for (int j = 0; j < 2; j++)
         {
             cin>>a[i][j];
         }
    }
    for (int i = 0; i < n; i++)
    {
        host=a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (a[j][1]==host)
            {
                count++;
            }
        }
        
    }
    cout<<count<<endl;
return 0;
}