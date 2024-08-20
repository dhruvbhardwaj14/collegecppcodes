#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
long long int a[n];
vector<pair<long long int,int>> v;
 
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    v.push_back(make_pair(a[i],i));
}
sort(v.begin(),v.end());
long long int ans=0;
int count=0;
map<int,int> mp;
for (int i = n-1; i>=0; i--)
{
    if (mp[v[i].second%k]==0)
    {
        ans+=v[i].first;
        mp[v[i].second%k]++;
        count++;
        if (count==k)
        {
            break;
        }
    }
}
cout<<ans<<endl;

}
return 0;
}