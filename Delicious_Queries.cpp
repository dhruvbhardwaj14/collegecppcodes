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
long long int m[n];
for (long long int i = 0; i < n; i++)
{
    cin>>m[i];
}
long long int q;
cin>>q;
vector<pair<long long int,long long int>> v;
for (long long int i = 0; i < q; i++)
{
    long long int k,p;
    cin>>p>>k;
    v.push_back(make_pair(p,k));
}
map<long long int,long long int> mp;
for (int i = 0; i < n; i++)
{
    if (m[i]%v[i].first==0)
    {
        
    }
    
}


}
return 0;
}