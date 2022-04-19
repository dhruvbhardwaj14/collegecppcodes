#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int minimum(int a[],int n){
    int min1=INT_MAX;
    for (int i = 0; i < n; i++)
    {   
         min1=min(a[i],min1);
    }
 return min1;   
}
int maximum(int a[],int n){
    int max1=INT_MIN;
    for (int i = 0; i < n; i++)
    {   
         max1=max(a[i],max1);
    }
 return max1;   
}
int main(){
int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
   cin>>a[i];
}
int s=INT_MIN;
int e=INT_MAX;
int max1=maximum(a,n);
int min1=minimum(a,n);
for (int i = 0; i < n; i++)
{
    if (a[i]==max1)
    {
        e=min(e,i);
    }
    if (a[i]==min1)
    {
        s=max(s,i);
    }
}
int count=e+(n-1-s);
if (s<e)
{
    cout<<count-1<<endl;
}
else{
    cout<<count<<endl;
}
return 0;
}