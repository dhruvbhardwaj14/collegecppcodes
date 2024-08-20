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
char s[n];
for (int i = 0; i < n; i++)
{
    cin>>s[i];
}
int count0=0;
int count1=0;
for (int i = 0; i < n; i++)
{
    if (s[i]==s[i+1])
    {
        if (s[i]=='0')
        {
           count0++;
        }
        else{
            count1++;
        }
    }
}
if (s[0]==s[n-1])
{
    if (s[0]=='0')
        {
           count0++;
        }
        else{
            count1++;
        }
}
int count=min(count0,count1);
if (count%2==0)
{
    cout<<"BOB"<<endl;
}
else{
    cout<<"ALICE"<<endl;
}

}
return 0;
}