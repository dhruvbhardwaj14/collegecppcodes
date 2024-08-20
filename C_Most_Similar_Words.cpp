#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int diffelement(string s1,string s2){
    int ans=0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2[i]>s1[i])
        {
            ans+=(s2[i]-s1[i]);
        }
        else{
            ans+=(s1[i]-s2[i]);
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s[n];
        int ans=INT_MAX;
        for (int i = 0; i <n; i++)
        {
            cin>>s[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j =i+1; j < n; j++)
            {
                ans=min(ans,diffelement(s[i],s[j]));
            }
        }
        cout<<ans<<endl; 
    }
return 0;
}