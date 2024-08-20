#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int a[n];
set<long long int> s;
for (long long int i = 0; i < n; i++)
{
    cin>>a[i];
    s.insert(a[i]);
}
if (s.size()==n)
{
    if (s.size()&1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}