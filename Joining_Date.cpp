#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int krange,nrange;
        if (k%5==0)
        {
            krange=(k-(k%5))/5;
        }
        else{
            krange=(k-(k%5))/5+1;
        }
        if (n%5==0)
        {
            nrange=(n-(n%5))/5;
        }
        else{
            nrange=(n-(n%5))/5+1;
        }
        cout<<nrange-krange<<endl;
        

        
    }
    
return 0;
}