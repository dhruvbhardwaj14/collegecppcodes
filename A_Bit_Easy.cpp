#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long int n,k;
    cin>>n>>k;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int count=0;
    map<long long int,long long int> mp;
    for (long long int i = 0; i < n; i++)
    {
        count+=mp[a[i]];
        mp[((k-a[i])^a[i])]++;
    }
    cout<<count<<endl;
}
return 0;
}