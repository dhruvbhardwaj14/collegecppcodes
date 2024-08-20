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
vector<pair<long long int,long long int>> v;
vector<pair<long long int,long long int>> ans;
vector<pair<long long int,long long int>> ans2;
for (long long int i = 0; i < n; i++)
{
    cin>>a[i];
    v.push_back(make_pair(a[i],i+1));
}
for (long long int i = 0; i < n; i++)
{
    // cout<<v[i].first<<"-"<<v[i].second<<" ";
    if (v[i].second>v[i].first)
    {
        ans.push_back(make_pair(v[i].first,v[i].second));
    }
}
for (long long int i = 0; i < ans.size(); i++)
{
    cout<<ans[i].first<<"-"<<ans[i].second<<" ";
    
}
cout<<endl;
}
return 0;
}