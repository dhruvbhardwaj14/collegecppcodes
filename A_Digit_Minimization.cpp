#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
       cin>>s;
        if (s.length()==2)
        {
            cout<<s[1]<<endl;
        }
        else{
            int n=stoi(s);
             int mindig=INT_MAX;
        while(n>0){
            mindig=min(mindig,n%10);
            n/=10;
        }
        cout<<mindig<<endl;
        }
    }
return 0;
}