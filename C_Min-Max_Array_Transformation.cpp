#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int giveindx(long long int a[],long long int n,long long int k,int iterator){
    int s=0;
    bool flag=false;
    int e=n-1;
    while (s<=e)
    {
        if (a[s]>=k)
        {
           flag=true;
           break;
        }
        s++;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    long long int a[n];
    long long int b[n];
    long long int mn[n];
    long long int mx[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (long long int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
        for (int i = 0; i < n; i++)
        {
            mx[i]=b[n-1]-a[i];
            if (a[i]<=b[0])
            {
                mn[i]=b[0]-a[i];
            }
            else{
               int indx=giveindx(a,n,a[i],i);
               mn[i]=b[indx]-a[i];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<mn[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<mx[i]<<" ";
        }
        cout<<endl;
}
return 0;
}