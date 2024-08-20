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
string s;
cin>>s;
map<int,int> mp;
int count=0;
for (int i = 0; i < n; i++)
{
    if (mp[s[i]]==0)
    {
        count+=2;
        mp[s[i]]++;
    }
    else{ 
        count+=1;
    }
}
cout<<count<<endl;
}
return 0;
}