#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n;
        cin>>n;
        long long int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
           cin>>b[i];
        }
        int s=0;
        int e=0;
        int count=0;
        while(s!=n-1){
            if (e==n)
            {
                s++;
                e=s+1;
            }
            if (s<e &&a[s]==b[e]&&a[e]==b[s])
            {
                count++;
                e++;
            }
            else{
                e++;
            }
            
        }
        cout<<count<<endl;
    }
return 0;
}