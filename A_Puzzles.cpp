#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int mindiff=INT_MAX;
    int t=n-1;
    for (int i = 0; i < m; i++)
    {
        if (t<m)
        {
            mindiff=min(mindiff,(a[t]-a[i]));
             t++;
        }
        else{
            break;
        }

    }
    cout<<mindiff<<endl;
    
    return 0;
}