#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif


int t;
cin>>t;
for (int i = 0; i < t; i++)
{
cout<< "Case #"<<i+1<<": ";
long long int n;
long long int k;
cin>>n>>k;
vector<long long int> a;
vector<long long int> b;
for (long long int i = 0; i < n; i++)
{
    long long int x;
    cin>>x;
    a.push_back(x);
}
for (long long int i = 0; i < n; i++)
{
    long long int x;
    cin>>x;
    b.push_back(x);
}
if (k==0)
{
    bool flag=false;
    for (long long int i = 0; i < n; i++)
    {
        if (a[i]!=b[i])
        {
            flag=false;
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
    else{
        cout<<"NO"<<endl;
    }
}
else{
    long long int index=0;
    vector<long long int> check;
    for (long long int i = 0; i < n; i++)
    {
        if (b[i]==a[0])
        {
            index=i;
            break;
        }
    }
    for (long long int i = index; i < n; i++)check.push_back(b[i]);
    for (long long int i = 0; i < index; i++)check.push_back(b[i]);
    if (check==a)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }   
}
}
return 0;
}
