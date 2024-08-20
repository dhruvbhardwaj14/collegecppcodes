#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin>>b;
            a.push_back(b);
        }
        int min1=*min_element(a.begin(),a.end());
        int sum=0;
        for (int i = 0; i < a.size(); i++)
        {
            sum+=(a[i]-min1);
        }
        cout<<sum<<endl;
    }
return 0;
}