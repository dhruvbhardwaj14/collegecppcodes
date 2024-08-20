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
string a[n];
for (long long int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (long long int i = 0; i < n; i++)
{
    cout<<a[i]<<endl;
}

}
return 0;
}