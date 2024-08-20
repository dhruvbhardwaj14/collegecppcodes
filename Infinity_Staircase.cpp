#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long int n;
       cin>>n;
    // if (n==1)
    // {
    //     cout<<0<<endl;
    // }
    // else if (n<=4)
    // {
    //     cout<<1<<endl;
    // }
    // else{
    //     if ((n-1)%5==1)
    //     {
    //         cout<<((n-1)/5*2)+1<<endl;
    //         //+1
    //     }
    //     else if((n-1)%5==2){
    //         cout<<((n-1)/5*2)+1<<endl;
    //         //+1
    //     }
    //     else if((n-1)%5==3){
    //         cout<<((n-1)/5*2)+1<<endl;
    //         //+1
    //     }
    //     else if((n-1)%5==4){
    //         cout<<((n-1)/5*2)+2<<endl;
    //         //+2
    //     }
    //     else if((n-1)%5==0){
    //         cout<<((n-1)/5*2)<<endl;
    //         //+0
    //     }
    // }
    long long int div=2*((n-1)/5);
    long long int rem=((n-1)%5);
    if (rem>0 && rem<=3)
    {
        cout<<div+1<<endl;
    }
    else if(rem==4){
        cout<<div+2<<endl;
    }
    else{
        cout<<div<<endl;
    }
    
       }
return 0;
}