#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        string s="";
        for (int i = 0; i < 2*min(a,b); i++)
        {
            if (i%2==0)
            {
                s+='1';
            }
            else{
                s+='0';
            }
        }
        for (int i = 0; i < (a+b)-(2*min(a,b)); i++)
        {
            if (a<b)
            {
                s+="1";
            }
            else if(a>b){
                s+="0";
            }
        }
        
        cout<<s<<endl;
    }
    
return 0;
}