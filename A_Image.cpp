#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s1;
string s2;
cin>>s1>>s2;
string ans=s1+s2;
map<char,int> mp;
for (int i = 0; i < 4; i++)
{
    mp[ans[i]]++;
}
if (mp.size()==1)
{
    cout<<0<<endl;
}
else if(mp.size()==2){
    
        cout<<1<<endl;
}
else if(mp.size()==3){
    cout<<2<<endl;
}
else {
    cout<<3<<endl;
}

}
return 0;
}
