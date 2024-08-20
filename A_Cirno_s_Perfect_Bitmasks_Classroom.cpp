#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int x;
        cin>>x;
        for (long long int i = 0; i <100000; i++)
        {
            if ((x^i)>0 && (x&i)>0)
            {
                cout<<i<<endl;
                break;
            }
            
        }
        
    }
    
return 0;
}