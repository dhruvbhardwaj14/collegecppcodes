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
vector<long long int> v;
map<long long int,long long int> mp;
for (long long int i = 1; i <=n; i++)
{
    if (i*2<=n)
    {
         v.push_back(i);
        v.push_back(i*2);
        mp[i*2]++;
    }else{ 
        if (mp[i]==0)
        {
            v.push_back(i);
        }
    }
}
auto ip = unique(v.begin(), v.end());
    // Now v becomes {1 2 3 7 8 10 * * * * * *}
    // * means undefined
  
    // Resizing the vector so as to remove the undefined terms
    v.resize(distance(v.begin(), ip));

cout<<2<<endl;
for (auto it : v)
{
    cout<<it<<" ";
}
cout<<endl;
}
return 0;
}