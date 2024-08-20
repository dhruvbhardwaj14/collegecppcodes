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
        long long int a[n];
        long long int b[n];
        map <long long int,int> m;
        int count=0;
        long long int count0=0;
        
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]==0)
            {
                b[i]=1;
                count0++;
            }
            
        }
        if (count0==n){ 
            cout<<0<<endl;
        }
        else if(n==1 || (n-count0)==1 || count0==0){
            cout<<1<<endl;
        }
        else{ 
            for (int i = 0; i < n; i++)
            {
                if (b[i]==1)
                {
                    if(b[i+1]-b[i]!=0){ 
                        count++;
                    }
                }
                else{ 
                    continue;
                }
            }
            if (count==1)
            {
                if (b[0]==1 || b[n-1]==1)
                {
                    cout<<1<<endl;
                }
            }
            else{ 
            cout<<count-1<<endl;
            }
        }
        

    }
    
return 0;
}