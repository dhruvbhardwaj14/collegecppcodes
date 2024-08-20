#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int  n,x;
        cin>>n>>x;
        if (n%2!=0)
        {
           if (x%2!=0)
           {
               cout<<"YES"<<endl;
           }
           else{
               cout<<"NO"<<endl;
           }
           
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
return 0;
}