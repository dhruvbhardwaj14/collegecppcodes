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
vector<pair<long long int,long long int>> v;
for (long long int i = 0; i < k; i++)
{
    long long int a,b;
    cin>>a>>b;
    v.push_back(make_pair(a,b));
}
for (auto it : v)
{
    cout<<it.first<<" ";
    cout<<it.second<<endl;
}
cout<<endl;

}
return 0;
}