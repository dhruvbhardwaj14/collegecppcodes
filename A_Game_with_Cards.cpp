#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        cin>>m;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin>>a;
            b.push_back(a);
        }
        string s1,s2;
        if (*max_element(a.begin(),a.end())>*max_element(b.begin(),b.end()))
        {
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else if (*max_element(a.begin(),a.end())<*max_element(b.begin(),b.end()))
        {
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        else if(*max_element(a.begin(),a.end())==*max_element(b.begin(),b.end())){
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
    }
    
return 0;
}