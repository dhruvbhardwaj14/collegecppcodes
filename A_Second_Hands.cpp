#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
for (int i = 0; i < t; i++)
{
cout<<"Case #"<<i+1<<": ";
int n,k;
cin>>n>>k;
vector<int> v;
map<int,int> mp;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    mp[x]++;
}
if (2*k>=n)
{
    bool flag=false;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]]>2)
        {
            flag=false;
            cout<<"NO"<<endl;
            break;
        }
        else{
            flag=true;
        }
    }
    if (flag)
    {
        cout<<"YES"<<endl;
    }
    
    
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}