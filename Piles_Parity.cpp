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
long long int a[n];
long long int count=0;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    if ((i+1)&1)
    {
        count+=a[i];
    }
    else{
        count+=a[i]-1;
    }
}
if (count&1)
{
    cout<<"CHEF"<<endl;
}
else{
    cout<<"CHEFINA"<<endl;
}


}
return 0;
}