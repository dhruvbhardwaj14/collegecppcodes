#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int mx=INT_MIN;
        long long int mxz=INT_MIN;
        long long int n,z;
        cin>>n>>z;
        long long int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            mx=max(b[i],mx);
            mxz=max(z,mxz);
            b[i]|=z;
            z=a[i]&z;
            
        }
        long long int newmx=INT_MIN;
        int i=0;
        while (i<n)
        {
            b[i]|=mxz;
            newmx=max(b[i],newmx);
            i++;
        }
        if (newmx==mx)
        {
            cout<<mx<<endl;
        }
        else{ 
            cout<<newmx<<endl;
        }
    }
    
return 0;
}