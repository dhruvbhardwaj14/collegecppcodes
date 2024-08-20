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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int a=count(arr,arr+n,-1);
        int b=count(arr,arr+n,1);
        int mn=min(a,b);
        if ((a+b)%2==0 && a!=b)
        {
            cout<<(n/2)-mn<<endl;
        }
        else if(a==b){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
        
    }
    
return 0;
}