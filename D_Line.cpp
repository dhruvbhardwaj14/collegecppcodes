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
char s[n];
for (long long int i = 0; i < n; i++)
{
    cin>>s[i];
}
long long int sum=0;
for (long long int i = 0; i < n; i++)
{
   if (s[i]=='L')
   {
       sum+=i;
   }
   if (s[i]=='R')
   {
       sum+=n-(i+1);
   }
}
// cout<<sum<<endl;
vector<long long int> count;
for (int i = 0; i < (n/2); i++)
{
    if (s[i]=='L')
    {
        count.push_back(sum-i+(n-(i+1)));
    }
    
}
for (int i = n/2; i < n; i++)
{
    if (s[i]=='R')
    {
        count.push_back(sum+i-(n-(i+1)));
    }
}
sort(count.begin(),count.end());
for (auto it : count)
{
    cout<<it<<" ";
}
cout<<endl;

  


}
return 0;
}