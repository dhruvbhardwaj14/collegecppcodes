#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int V,E;
    cin>>V>>E;
    vector<vector<int>> adj(V,vector<int>());
    for(int i = 0;i<E;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
    }
    vector<int> indeg(V);
    vector<int> outdeg(V);
    int i = 0;
    for(auto edge:adj)
    {   
        for(auto it:edge)
        {
            outdeg[i]++;
            indeg[it]++;
        }
        i++;
    }
    for(auto it:indeg) cout<<it<<" ";
    cout<<endl;
    for(auto it:outdeg) cout<<it<<" ";
return 0;
}