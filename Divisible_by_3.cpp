#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long int a,b;
        cin>>a>>b;
        if (a%3==0 || b%3==0)
        {
            cout<<0<<endl;
        }
        else if (abs(a-b)%3==0)
        {
            cout<<1<<endl;
        }
        else{
            cout<<max((a%3),(b%3))<<endl;
        }
    }
    
return 0;
}