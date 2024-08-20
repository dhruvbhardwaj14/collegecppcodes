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
vector<long long int > a;
vector<long long int > b;
for (int i = 0; i < n; i++)
{
   long long int x;
   cin>>x;
   a.push_back(x);
   b.push_back(x);
}
sort(b.begin(),b.end());
if (a==b)
{
    cout<<0<<endl;
    continue;
}
else{
    bool isodd=false;
    bool iseven=false;
    b.clear();
    for (int i = 0; i < n; i++)
    {
       if (a[i]%2==0)
       {
           iseven=true;
       }
       else{
           isodd=true;
       }
    }
    if (isodd && !iseven)
    {
        cout<<n-1<<endl;
        for (int i = 1; i<n; i++)
        {
            cout<<i<<" "<<n<<endl;
        }
    }
    else if (iseven && !isodd)
    {
        cout<<n-1<<endl;
        for (int i = 1; i<n; i++)
        {
            cout<<i<<" "<<n<<endl;
        }
    }
    else if(iseven && isodd){
        if (a[0]%2==0)
        {
            int index=0;
            map<int,int> mp;
            for (int i = 0; i < n; i++)
            {
                if (a[i]%2==0)
                {
                    mp[i]++;
                    index=i;
                }
            }
            cout<<n-1<<endl;
            for (int i = 0; i < n; i++)
            {
                if (mp[i]>0 && i+1!=index+1)
                {
                    cout<<i+1<<" "<<index+1<<endl;;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (mp[i]==0)
                {
                    cout<<1<<" "<<i+1<<endl;;
                }
            }
        }
        else{
            int index=0;
            map<int,int> mp;
            for (int i = 0; i < n; i++)
            {
                if (a[i]%2==1)
                {
                    mp[i]++;
                    index=i;
                }
            }
            cout<<n-1<<endl;
            for (int i = 0; i < n; i++)
            {
                if (mp[i]>0 && i+1!=index+1)
                {
                    cout<<i+1<<" "<<index+1<<endl;;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (mp[i]==0)
                {
                    cout<<1<<" "<<i+1<<endl;;
                }
            }
            
            
        }
        
        
    }
    
}


}
return 0;
}