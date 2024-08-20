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
vector<long long int> posa;
vector<long long int> nega;
bool positive=false;
bool negative=false;
bool bothitive=false;
for (long long int  i = 0; i < n; i++)
{
    cin>>a[i];
    if (a[i]>=0)
    {
        positive=true;
    }
    else{
        negative=true;
    }
}
sort(a,a+n);
if (positive && negative)
{
    bothitive=true;
    // cout<<"BOTHITIVE IS ARRAY"<<endl;
    long long int mx=max(-a[0],a[n-1]);
    long long int posmx=INT_MIN;
    long long int negmx=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            posmx=max(posmx,a[i]);
        }
        else{
            negmx=min(negmx,a[i]);
        }
    }
    
    cout<<posmx*negmx<<" "<<mx*mx<<endl;
}
else{
        if (positive)
        {
            // cout<<"positive only array"<<endl;
            long long int mn=a[0];
            long long int mx=a[n-1];
            cout<<mn*mn<<" "<<mx*mx<<endl;
        }
        else{
            // cout<<"Negative only array"<<endl;
            long long int mx=a[0];
            long long int mn=a[n-1];
            cout<<mn*mn<<" "<<mx*mx<<endl;
        }
    }
}
return 0;
}