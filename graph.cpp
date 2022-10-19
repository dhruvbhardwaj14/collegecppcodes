#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    /* Write a Program to represent Graphs using the Adjacency Matrices and check if it is a 
    complete graph */
    // int vertices,edges;
    // cin>>vertices>>edges;
    // vector<vector<int>> adj(vertices,vector<int>());// adjacency list representation
    // /*
    // 0 -> 1 2 
    // 1 -> empty vector
    // 2 -> empty vector
    // 3 -> empty vector
    // */
    // // input a graph
    // for(int i = 0;i<edges;i++)
    // {   
    //     int ver1,ver2;
    //     cin>>ver1>>ver2;
    //     adj[ver1].push_back(ver2);
    //     adj[ver2].push_back(ver1);
    // }
    // // to check if a complete graph
    // // ver*(ver-1)/2 edges --> Nc2 (N -> number of vertices)
    // cout << ((edges == vertices*(vertices-1)/2) ? "YES" : "NO") <<endl;


    // Write a Program to accept a directed graph G and compute the in-degree and out-degree of each vertex.
    // int V,E;
    // cin>>V>>E;
    // vector<vector<int>> adj(V,vector<int>());
    // for(int i = 0;i<E;i++)
    // {
    //     int v1,v2;
    //     cin>>v1>>v2;
    //     adj[v1].push_back(v2);
    // }
    // vector<int> indeg(V);
    // vector<int> outdeg(V);
    // int i = 0;
    // for(auto edge:adj)
    // {   
    //     for(auto it:edge)
    //     {
    //         outdeg[i]++;
    //         indeg[it]++;
    //     }
    //     i++;
    // }
    // for(auto it:indeg) cout<<it<<" ";
    // cout<<endl;
    // for(auto it:outdeg) cout<<it<<" ";

    // Given a full m-ary tree with i internal vertices, Write a Program to find the number of leaf nodes.
    // int m ,i;
    // cin>>m>>i;
    // int power = 0;
    // while(i%m)
    // {
    //     i/=m;
    //     power++;
    // }
    // cout<<pow(m,power-1)<<endl;


    // Given an adjacency matrix of a graph, write a program to check whether a given set of vertices {v1,v2,v3.....,vk} forms an Euler path / Euler Circuit (for circuit assume vk=v1).
    map<pair<int,int>,int> mp;
    int vertex;
    cin>>vertex;
    int k;
    cin>>k;
    vector<int> vertices;
    int matrix[vertex][vertex];
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cin>>matrix[i][j];
        }
    }
    // matrix[i][j]=1 if edge
    for(int i = 0;i<k;i++)
    {
        int x;
        cin>>x;
        vertices.push_back(x);
    }
    for(int i = 0;i<k;i++)
    {
 mp[{vertices[i],vertices[i+1]}]++;
        // (vertices[i]==vertices[0] && i!=0) ? mp[{vertices[k-1],vertices[i]}]++ : mp[{vertices[i+1],vertices[i]}]++;
    }
    bool ok = true;
    for(auto it:mp)
    {
        cout<<it.first.first<<"-";
        cout<<it.first.second<<"--";
        cout<<it.second<<endl;
        if(it.second>1 || (it.first.first==it.first.second && it.first.first!=0)) {
            ok = false;
            break;
        }
    }
    cout<< (ok ? "YES" : "NO") << endl;

return 0;
}
