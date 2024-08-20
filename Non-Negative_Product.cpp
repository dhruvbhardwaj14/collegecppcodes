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
int count=0;
bool flag=false;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if (a[i]<0)
    {
        count++;
    }
    if (a[i]==0)
    {
        flag=true;
    }
    
}
if (count&1 && flag==false)
{
    cout<<1<<endl;
}else{
    cout<<0<<endl;
}


}
return 0;
}