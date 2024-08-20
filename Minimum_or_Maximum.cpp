#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int mx=a[0];
        int mn=a[0];
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i]<=mn)
            {
                mn=a[i];
                count++;
            }
            else if (a[i]>=mx)
            {
                mx=a[i];
                count++;
            }
        }
        if (count==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
return 0;
}