#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if (is_sorted(a,a+n))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
return 0;
}