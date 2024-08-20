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
int counte=0;
int counto=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if (a[i]&1)
    {
        counto++;
    }
    else{
        counte++;
    }
}
if(counto!=0)
cout<<counte<<endl;
else
cout<<0<<endl;
}
return 0;
}