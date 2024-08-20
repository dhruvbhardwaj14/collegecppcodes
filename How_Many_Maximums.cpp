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
        int ct=0;
        int count_0=count(s.begin(),s.end(),'0');
        int count_1=count(s.begin(),s.end(),'1');
        if (s=="0")
        {
            cout<<1<<endl;
            continue;
        }
        else if (s=="1")
        {
            cout<<1<<endl;
            continue;
        }
        
       else if (count_0==n-1 || count_1==n-1)
        {
            cout<<1<<endl;
        }
        else{
             if (s[0]=='1')
        {
            ct+=1;
        }
        if (s[n-2]=='0')
        {
            ct+=1;
        }
        for (int i = 0; i < s.length(); i++)
        {   
            //01

            if (s[i]=='0' && s[i+1]=='1')
            {
                ct++;
            }
            //110
            // else if((s[i]=='1' && s[i+1]=='0') && s[i-1]=='1'){
            //     ct++;
            // }
        }
       
        cout<<ct<<endl;
        }
        
        
        
    }
    
return 0;
}