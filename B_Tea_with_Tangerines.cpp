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
int a[n];
int mn=INT_MAX;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mn=min(a[i],mn);
}
int ans=0;
int piece=0;
for (int i = 0; i < n; i++)
{
    if (a[i]>(2*mn)-1)
    {
       if (a[i]%((2*mn)-1)==0)
        {
            piece=a[i]/((2*mn)-1);
        }
        else{
            piece=a[i]/((2*mn)-1);
            piece++;
        }
        ans+=piece-1;
    }
    
}
cout<<ans<<endl;
}
return 0;
}