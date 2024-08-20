#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        map<int,int> idx;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int count=0;
        int case_var=0;
        bool flag=1;
        int max_var=INT_MIN;
        for (int i = 0; i < n; i++)
        {
           if (a[i]==b[i])
           {
               count++;
               idx[a[i]]=i;
               max_var=max(max_var,a[i]);
           }
        }
        for (auto i : idx){
        cout << i.first << "   " << i.second
             << endl;
        if (i.first==max_var)
        {
        
        
        for (int j = 0; j < n; j++)
        {
           if (a[j]<i.first && j<i.second)
           {
               flag=0;
           }
           else if(a[j]>i.first && j<i.second){
               flag=1;
           }
           else if (a[j]>i.first && j>i.second && flag==0)
           {
               case_var=1;
           }
           else if(a[j]>i.first && j>i.second && flag==1){case_var=2;
           }
        }

        } 
        }
        cout<<case_var<<endl;
        if (case_var==0)
        {
            cout<<0<<endl;
        }
        else if (case_var==1)
        {
            int l=0;
            int r=idx[max_var];
            sort(a,a+r);
            cout<<l+1<<" "<<r<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            l=idx[max_var];
            r=n;
            cout<<l+2<<" "<<r<<endl;
            sort(a+l,a+r);
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
        }
        // else if(case_var==2){

        // }
        
    }
    
return 0;
}