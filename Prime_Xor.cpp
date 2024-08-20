#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int z=x^y;
        int a,b,c;
        if (x%2!=0 && y%2!=0)
        {
            b=2;
            a=x^2;
            c=y^2;
        }
        else if (y%2!=0 && z%2!=0)
        {
            c=2;
            a=z^2;
            b=y^2;
        }
        else if (z%2!=0 && x%2!=0)
        {
            a=2;
            b=x^2;
            c=z^2;
        }
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        for (int i = 0; i < 3; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}