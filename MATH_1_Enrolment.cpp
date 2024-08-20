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
        if(x<y){ 
            cout<<abs(x-y)<<endl;
        }
        else{ 
            cout<<0<<endl;
        }
    }
    
return 0;
}