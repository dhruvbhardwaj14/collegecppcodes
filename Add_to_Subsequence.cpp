#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){ 
    return p1.second<p2.second;
}
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long int a[n];
map<long long int,int> mp;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
auto mx=*max_element(mp.begin(),mp.end(),comp);
long long int count=mx.second;
long long int ans=0;
while (count>1)
{
    if(count&1){
        count=(count+1)/2;
    }else{
        count/=2;
    }
    ans++;
}
cout<<ans<<endl;
}
return 0;
}