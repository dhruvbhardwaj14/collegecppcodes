#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int maxDiff(int arr[], int arr_size)
{
     // Maximum difference found so far
     int max_diff = arr[1] - arr[0];
       
     // Minimum number visited so far 
     int min_element = arr[0];
     for(int i = 1; i < arr_size; i++)
     {     
       if (arr[i] - min_element > max_diff)                             
       max_diff = arr[i] - min_element;
         
       if (arr[i] < min_element)
       min_element = arr[i];                     
     }
       
     return max_diff;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int se=1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=b[i])
            {
                v.push_back(i);
            }  
        }
        int c[v.size()];
        int t=0;
        for (auto a : v)
        {
            c[t]=a;
            t++;
        }
        cout<<maxDiff(c,v.size())<<endl;
        
    }
    
return 0;
}