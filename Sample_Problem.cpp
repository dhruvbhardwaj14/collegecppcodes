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
int n,m;
cin>>n>>m;
int c[n];
int sum=0;
for (int i = 0; i < n; i++)
{
    cin>>c[i];
    sum+=c[i];
}
cout<<sum%m<<endl;
}
return 0;
}