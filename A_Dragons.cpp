#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int> > v;
    for (int i = 0; i < n; i++)
    {
        int strength;
        int bonus;
        cin>>strength;
        cin>>bonus;
        v.push_back(make_pair(strength,bonus));
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
        if (s>v[i].first)
        {
            s+=v[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    
    
return 0;
}