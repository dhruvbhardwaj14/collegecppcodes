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
        char curr=s[0];
        int count=0;
        bool flag=0;
        vector<int> v;
        for (int i = 0; i <n; i++)
        {
            
            if (s[i]==curr)
            {
                count++;
                if (i==n-1)
                {
                    v.push_back(count);
                }
                
            }
            else if (s[i]!=curr)
            {
                if (i==n-1)
                {
                    count=1;
                    v.push_back(count);
                }
                v.push_back(count);
                curr=s[i];
                if (count%2==0)
                {
                    flag=1;
                }
                else{
                    flag=0;
                }
                count=1;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        
        // if (flag)
        // {
        //     cout<<0<<endl;
        // }
        // else{
        //     cout<<"not"<<endl;
        // }
        cout<<endl;
    }
    
return 0;
}