#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
for (int i = 0; i < t; i++)
{
cout<< "Case #"<<i+1<<": ";
long long int n;
cin>>n;
vector <long long int> v;
for (long long int i = 0; i < n; i++)
{
    long long int x;
    cin>>x;
    v.push_back(x);
}
long long int count=0;
pair<long long int,long long int> mx={v[0],0};
if (n==1)
{
    cout<<1<<endl;
    continue;
}

for (long long int i = 1; i < n-1; i++)
{
    if (v[i]>mx.first && i>mx.second)
    {
        mx.first=v[i];
        mx.second=i;
        if (v[i]>v[i+1])
        {
            count++;
        }
    }    
}
if (v[0]>v[1])
{
    count++;
}
if (v[n-1]>mx.first)
{
    count++;
}
cout<<count<<endl;

}
return 0;
}