#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    string s[t];
    int sum=0;
    int sum1=0;
    for (int i = 0; i < t; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < t; i++)
    {
        string s1=s[i].substr(0,3);
        string s2=s[i].substr(3,6);
        sum1=0;
        sum=0;
        for (int j = 0; j < s1.length(); j++)
        {
            
            if (s1[j]!='0' || s2[j]!='0')
            {
               sum1+=s1[j]-'0';
               sum+=s2[j]-'0';
            }
        }
        if (sum1==sum)
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }    
return 0;
}