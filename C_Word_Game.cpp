#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n ;
cin>>n;
string a[3][n];
for (int i = 0; i < 3; i++)
{
 for (int j = 0; j < n; j++)
 {
     cin>>a[i][j];
 } 
}
map<string,int> mp;
int count[3]={0,0,0};
for (int i = 0; i < 3; i++)
{
 for (int j = 0; j < n; j++)
 {
     mp[a[i][j]]++;
 } 
}
for (int i = 0; i < 3; i++)
{
 for (int j = 0; j < n; j++)
 {
     if (mp[a[i][j]]==1)
     {
         count[i]+=3;
     }
     else if (mp[a[i][j]]==2)
     {
         count[i]++;
     }
 } 
}
for (int i = 0; i < 3; i++)
{
    cout<<count[i]<<" ";
}
cout<<endl;

}

return 0;
}

