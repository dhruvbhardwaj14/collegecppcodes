#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int T=1;T<=t;T++){
    int flag=true;
    int i=0;
    int e=0;
    int count=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        while (flag)
        {
            if (a[i]==a[e] && count<a[e])
            {
                i=e;//0,0,1,1
                e++;//1 2
                count++;//1 2
            }
            else if (count>=a[e])
            {
               i=e;
               e++;
            }
            else if (count<a[e])
            {
                count++;
                i=e;
                e++;
            }
            if (e==n)
            {
                flag=false;
            }
        }
        cout << "Case #" << T << ": ";
            cout<<count<<endl;
    }
return 0;
}