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
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
// for (int i = 0; i < n; i++)
// {
//     cout<<a[i]<<" ";
// }
// cout<<endl;
int b[n];
    string s[n];
for (int i = 0; i < n; i++)
{
    cin>>b[i];
    cin>>s[i];
}
for (int i = 0; i < n; i++)
{
    for (int it = 0; it < s[i].length(); it++)
    {
        if (s[i][it]=='U')
    {
        a[i]--;
    }
    else if(s[i][it]=='D'){ 
        a[i]++;
    }
    }
    if (a[i]>9)
    {
        a[i]=abs(a[i]-10);
    }
    else if(a[i]<0){ 
        a[i]=abs(a[i]+10);
    }
    
}
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;




}
return 0;
}