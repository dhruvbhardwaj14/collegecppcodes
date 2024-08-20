#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long int a[n];
map<long long int,long long int> mp;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
long long int count=0;
for (auto it : mp)
{
    if (it.second>1)
    {
        count+=((it.second)*(it.second-1))/2;
    }
}
cout<<count<<endl;
}
return 0;
}