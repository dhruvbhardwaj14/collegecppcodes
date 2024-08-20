#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,m;
cin>>n>>m;
long long int a[n];
long long int sum=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    sum+=max(a[i]-1,abs(a[i]-m));
}
cout<<sum<<endl;
}
return 0;
}