#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
for (int i = 1; i <=t; i++)
{
cout<<"Case #"<<i<<": "; 
int n,m;
cin>>n>>m;
int a[n];
int b[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    b[i]=a[i];
}
double sum=0;
if (m==1 && n>1)
{
    if (n%2==1)
    {
        sum+=(double)(a[(n)/2]);
    }
    else{ 
        sum+=(double)(a[(n-1)/2]+a[n/2])/2;
    }
}
else if(m==1 && n==1){ 
    sum=a[0];
}
else if(n-m==1 && m>1){ 
sort(b,b+n);
sum+=accumulate(b+2,b+n,sum);
sum+=(double)(b[0]+b[1])/2;
}
else if(n-m==0 && m>1){ 
sort(b,b+n);
sum+=accumulate(b,b+n,sum);
}
else if(m>1 && n-m>1){ 
    sort(b,b+n);
        if ((n-m)%2==0)
        {
            sum+=(double)b[n-m];
        }
        else{ 
            sum+=((double)(b[n-m]+b[n-m-1])/2);
        }
    sum+=accumulate(b+(n-m+1),b+n,0);
}
cout<<setprecision(6)<<fixed<<(double)sum<<endl;
}
return 0;
}