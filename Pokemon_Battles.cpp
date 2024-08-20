#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int a[n];
long long int b[n];
vector<pair<long long int,long long int>> v;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
for (int i = 0; i < n; i++)
{
    v.push_back(make_pair(a[i],b[i]));
}
sort(v.begin(),v.end());
int count=0;
long long int mx=INT_MIN;
for (int i = n-1; i >=0; i--)
{
    if (v[i].second>mx)
    {
        mx=max(mx,v[i].second);
        count++;
    }
    mx=max(mx,v[i].second);
}
cout<<count<<endl;



}
return 0;
}