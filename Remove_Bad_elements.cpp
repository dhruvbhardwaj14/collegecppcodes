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
int a[n];
map<int,int> mp;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mp[a[i]]++;
}
auto mx=*max_element(mp.begin(),mp.end(),comp);
cout<<n-mx.second<<endl;
}
return 0;
}