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
vector<int> a;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    a.push_back(x);
}
int k;
cin>>k;
vector<int> b;
for (int i = 0; i < k; i++)
{
    int x;
    cin>>x;
    b.push_back(x);
}
map<int,int> mp;
for (int i = 0; i < k; i++)
{
    mp[b[i]]++;
}
for (int i = 0; i < n; i++)
{
    if (mp[a[i]]==0)
    {
        cout<<a[i]<<" ";
    }
    else{
        continue;
    }
}
cout<<endl;



}
return 0;
}