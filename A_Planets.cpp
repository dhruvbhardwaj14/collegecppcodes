#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,c;
cin>>n>>c;
int a[n];
map<int,int> mp;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
int ans=0;
for (auto it : mp)
{
    // cout<<it.first<<"-"<<it.second<<endl;
    if (it.second<c)
    {
        ans+=it.second;
    }
    else{
        ans+=c;
    }
    
}
cout<<ans<<endl;
}
return 0;
}