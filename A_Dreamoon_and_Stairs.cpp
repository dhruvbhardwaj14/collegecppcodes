#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    bool flag=0;
    int n,m;
    cin>>n>>m;
    for (int i = (n+1)/2; i <=n; i++)
    {
        // cout<<i<<" ";
        if (i%m==0)
        {
            flag=1;
           cout<<i<<endl;
           break;
        }
    }
    if (flag==0)
    {
        cout<<-1<<endl;
    }
    

return 0;
}