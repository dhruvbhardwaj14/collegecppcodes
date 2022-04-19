#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int totalsum=0;
    int count=0;
    int mincount=INT_MAX;
    for (int i = 0; i < n; i++)
    {
         totalsum+=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int currsum=0;
        count=0;
        for (int j = i; j < n; j++)
        {
           currsum+=a[j];
           int p=totalsum-currsum;
           count++;
           if (currsum>p)
           {
               mincount=min(mincount,count);
           }
        } 
    }
    cout<<mincount<<endl;
return 0;
}