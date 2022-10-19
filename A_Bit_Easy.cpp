#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--){
       long long int n,k;
        cin>>n>>k;
       long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count=0;
        int i=0;
        int j=1;
        while(i!=n-1){
            if (((a[i]|a[j])+(a[i]^a[j])+(a[i]&a[j]))==k+a[j])
            {
               count++;
               j++;
            }
            else{
                j++;
            }
            if (j==n)
            {
                i++;
                j=i+1;
            }
            
        }
        cout<<count<<endl;
}
return 0;
}