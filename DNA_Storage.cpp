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
        string p="";
        for (int i = 0; i < s.length(); i+=2)
        {
            if (s[i]=='0')
            {
                if (s[i+1]=='0')
                {
                   p+='A';
                }
                else if(s[i+1]=='1'){
                    p+='T';
                }
            }
            else if(s[i]=='1'){
                if (s[i+1]=='0')
                {
                   p+='C';
                }
                else if(s[i+1]=='1'){
                    p+='G';
                }
            }
        }
        cout<<p<<endl;
    }
    
return 0;
}