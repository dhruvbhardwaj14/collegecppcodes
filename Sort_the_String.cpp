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
        string s;
        cin>>s;
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                if (s[i+1]=='0')
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
return 0;
}