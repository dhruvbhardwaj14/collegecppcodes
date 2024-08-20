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
long long int a[n];
long long int b[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
map<long long int,long long int> mp;
for (int i = 0; i < n; i++)
{
    mp[i]=a[i]-b[i];
}
long long int sum=0;
for (auto it : mp)
    {
         sum+=it.second;
    }
long long int ans=0;
if (sum==0)
{
    for (auto it : mp)
    {
        if (it.second>=0)
        {
            ans+=it.second;
        }
    }
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}


}
return 0;
}