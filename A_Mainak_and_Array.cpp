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
int ans=0;
for (int i = 0; i < n; i++)
{
    ans=max(ans,a[n-1]-a[i]);
    ans=max(ans,a[i]-a[0]);
    ans=max(ans,a[i]-a[(i+1)%n]);
}
cout<<ans<<endl;

}
return 0;
}