#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        vector<pair<int,int> > mina;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m ; j++)
            {
                cin>>a[i][j];
            }
        }  
        pair<int,int> minel;
        minel.first=INT_MAX;
        int t=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m ; j++)
            {
               minel.first=min(minel,a[i][j]);
               if (minel>a[i]a[j])
               {
                   minel.second=j;
               }
            }
            mina[t].push_back(minel)
            minel.first
        cout<<mina[t]<<" ";
            t++;
            cout<<endl;
        }  
    }
return 0;
}