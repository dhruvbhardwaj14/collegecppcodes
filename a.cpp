#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n,countEven=0,countOdd=0;
        cin>>n;
        long long int a[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
            {
                countEven++;
            }
            else{countOdd++;}
        }
        // long long int diff=abs(countEven-countOdd);
        long long int mid=((countEven+countOdd)/2);
        long long int mx=max(countEven,countOdd);
        // long long int target=min(abs(mid-countEven),abs(mid-countOdd));
        cout<<abs(mid-mx)<<endl;
        
    }
       return 0;
    }