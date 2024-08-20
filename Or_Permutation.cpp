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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int x=0;
        for (int j = 0; j < 32; j++)
        {
        long long int count=0;
        for (int i = 0; i < n; i++)
        {
            if ((1<<j) & b[i])
            {
                count++;
            }
        }
        if (count==n)
        {
            x|=(1<<j);
        }
        }
        sort(b,b+n);
        long long int temp[n];
        for (int i = 0; i < n; i++)
        {
            temp[i]=a[i]|x;
        }
        sort(temp,temp+n);
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if(temp[i]!=b[i]){
                flag=1;
            }
        }
        if (flag)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<x<<endl;
        }
        
        
    }
    
return 0;
}