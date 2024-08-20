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
        long long int a[n];
        long long int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        map<long long int,long long int> mp;
        long long int count=0;
        for (int i = 0; i < n; i++)
        {
            count+=mp[a[i]^b[i]];
            mp[a[i]^b[i]]++;
        }
        cout<<count<<endl;
    }
    
return 0;
}