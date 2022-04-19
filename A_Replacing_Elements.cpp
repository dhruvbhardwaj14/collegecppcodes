#include<iostream>
#include<cmath>
#include "bits/stdc++.h"
 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }   
        sort(a,a+n);
        int ok=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>d)
            {
                ok=0;
            }
        }
        if(!ok)
        {
            if(a[0]+a[1] <= d ) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;

    }
    return 0;
}
// 5 3
// 2 3 2 5 4
// 2 2 3 4 5
