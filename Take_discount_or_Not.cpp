#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,x,y;
       cin>>n>>x>>y;
       int a[n];
       int total_expenditure=0;
       int  coupon_expense=x;
       for (int i = 0; i < n; i++)
       {
           cin>>a[i];
           total_expenditure+=a[i];
           if (a[i]>y)
           {
               coupon_expense+=a[i]-y;
           } 
       }
       if (total_expenditure>coupon_expense)
       {
          cout<<"COUPON"<<endl;
       }
       else{
           cout<<"NO COUPON"<<endl;
       }
    
       
    }
return 0;
}