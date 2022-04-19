#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int check[n];
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        check[i]=0;
    }
    int x;
    cin>>x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
        check[a[i]-1]++;
    }
    int y;
    cin>>y;
    int b[y];
    for (int i = 0; i < y; i++)
    {
        cin>>b[i];
        check[b[i]-1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (check[i]==0)
        {
            flag=1;
        }
        
    }
    if (flag==0)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }    
return 0;
}