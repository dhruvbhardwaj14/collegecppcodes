#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n,k;
        cin>>n>>k;
        if (k==1)
        {
            if (n%2==0)
            {
                cout<<"EVEN"<<endl;
            }
            else{
                cout<<"ODD"<<endl;
            }
        }
        else if(k==2){
            cout<<"ODD"<<endl;
        }
        else if(k>=3){
            cout<<"EVEN"<<endl;
        }
        
    }
    
return 0;
}