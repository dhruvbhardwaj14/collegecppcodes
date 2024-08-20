#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main(){
int t;
cin>>t;
while(t--){
long long int  n,k;
cin>>n>>k;
long long int a[n];
long long int G=0;
for (long long int i = 0; i < n; i++)
{
    cin>>a[i];
    G=gcd(G,a[i]);
}
long long int currG=0,count=0;
for (int i = 0; i < n; i++)
{
    currG=gcd(currG,a[i]);
    if (currG==G)
    {
        currG=0;
        count++;
    }
    if (count==k)
    {
        break;
    } 
}
if (count==k)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}