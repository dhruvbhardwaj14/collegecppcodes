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
map<int,int> mp;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    a.push_back(x);
    mp[x]=i+1;
}
if (n==1)
{
    cout<<1<<endl;
}
else{
    int x=*max_element(a.begin(),a.end());
    cout<<mp[x]<<endl;
}

}
return 0;
}