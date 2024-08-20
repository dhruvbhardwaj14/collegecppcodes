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
       int diff=abs(x-y);
       if (x>y)
       {
           if (diff%2==0)
           {
               cout<<diff/2<<endl;
           }
           else{
               cout<<(diff/2)+2<<endl;
           }
           
       }
       else if (y>x)
       {
           cout<<diff<<endl;
       }
       else{
           cout<<0<<endl;
       } 
    }
return 0;
}