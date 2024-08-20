#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a[2*n+1];
        for (int i = 0; i < 2*n+1; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        string s=a[2*n];
        for (int i = 0; i < 2*n+1; i++)
        {
            cout<<a[i]<<endl;
            if (a[i]!=s && s.find(a[i])!=-1)
            {
               
            }
            
        }
        

        
    }
    
return 0;
}