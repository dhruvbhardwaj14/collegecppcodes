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
string a="Timur";
bool flag=0;
for (int i = 0; i < 5; i++)
{
    if (count(s.begin(),s.end(),a[i])==1)
    {
        flag=1;
    }
    else{
        flag=0;
        break;
    }   
}
if (flag)
{
        cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}





}
return 0;
}