#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
long long int gcd(long long int a,long long int b){
    if (b==0)
    {
        return a;
    }
    else
    return gcd(b,a%b);
}
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int a[n];
long long int G=0;
bool hasOne=false;
for (long long int i = 0; i < n; i++)
{
    cin>>a[i];
    G=gcd(G,a[i]);
    if (a[i]==1)
    {
        hasOne=true;
    }
    
}
if (G!=1)
{
    cout<<0<<endl;
}
else{
    if (hasOne)
    {
        cout<<-1<<endl;
    }
    else{
        long long int currGcd=0;
        vector<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            currGcd=gcd(currGcd,a[i]);
            if (currGcd==1)
            {
                currGcd=0;
                v.push_back(i);
            }
        }
        for (auto it : v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    
}

}
return 0;
}