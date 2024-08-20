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
       long long  int a[n];
        vector<int> v;
        long long int count =0;
       long long  int sum=0;
        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            sum+=a[i];
            count++;
            if (count==2)
            {
                count=1;
                v.push_back(sum);
                sum=a[i];
            }
        }
        v.push_back((a[0]+a[n-1]));
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
    
return 0;
}