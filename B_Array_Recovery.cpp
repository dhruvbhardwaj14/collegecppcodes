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
int d[n];
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>d[i];
}
// ai-ai-1=di 
// 1-1=ai-1
//0
//0-ai-1=2
//
bool flag=false;
for (int i = 0; i < n; i++)
{
    if (i==0)
    {
        a[i]=d[i];
    }
    else{
        if (d[i]>=a[i-1] || d[i]==0)
        {
            a[i]=d[i]+a[i-1];
        }
        else{
            flag=true;
            break;
        }
    }
}
if (flag)
{
    cout<<-1<<endl;
}
else{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}
return 0;
}