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
if (n%3==2)
{
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
else if(n%3==1){ 
    if (n&1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i<=1)
            {
                if (i&1)
                {
                    cout<<i<<" ";
                }
                else{
                    cout<<i+2<<" ";
                }
            }
            else{
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if (i<n-2)
            {
                if (i&1)
                {
                    cout<<i<<" ";
                }
                else{
                    cout<<i+2<<" ";
                }
            }
            else{
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    
}

else{
    int a[n+1];
    vector<int> v;
    for (int i = 1; i <=n; i++)
    {
        a[i]=i;
        v.push_back(a[i]);
    }
    v.erase(v.begin()+(n)-((n/3)+1)-1);
    v.erase(v.begin()+n-(4+(2*((n-6)/3)))-1);
    for (int i = 0; i < n; i++)
    {
        
        if (i<=1)
            {
                if (i&1)
                {
                    cout<<n-i<<" ";
                }
                else{
                    cout<<n-(i+2)<<" ";
                }
            }
        else if(i>=n-3){
            if (i==n-1)
            {
               cout<<a[i+1]<<" ";
            }
            else if(i==n-2){
                cout<<a[(n)-((n/3)+1)]<<" ";
            }
            else{
                cout<<a[n-(4+(2*((n-6)/3)))]<<" ";
            }
        }
        else {
            cout<<v[i-2]<<" ";
        }
    }
    cout<<endl;
    
}

}
return 0;
}