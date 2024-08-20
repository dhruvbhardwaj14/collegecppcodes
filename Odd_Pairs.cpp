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
if (n%2==0)
{
   cout<<pow((n/2),2)*2<<endl;
}
else{
     cout<<((n+1)/2)*(n/2)*2<<endl;
}
}
return 0;
}