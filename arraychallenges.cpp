#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// question 1 max till i 

// int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    //  }
//      int mxx=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>mxx)
//         {
//             mxx=max(mxx,arr[i]);
//         }
//             cout<<mxx<<endl;
        
//     }
    

// return 0;
// }

// question 2 sum of all subaarays
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
     }
    int sm=0;
    for (int i = 0; i < n; i++)
    {
        sm=0;
        for (int j = i; j < n; j++)
        {
        sm+=arr[j];
        cout<<sm<<endl;
        }
        
    }
    
    
    return 0;

}

// question 3 kickstart google maximum arithmetic array 
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//           cin>>a[i];
//     }
//     int max_lnt=2;
//     int curr_lnt=2;
//     int pd=a[1]-a[0];
//     int j=2;

//     while (j<n)
//     {
//         if (pd==a[j]-a[j-1])
//         {
//             curr_lnt++;
//         }
//         else{
//             pd=a[j]-a[j-1];
//             curr_lnt=2;
//         }
//         max_lnt=max(curr_lnt,max_lnt);
//         j++;
//     }
//     cout<<max_lnt<<endl;
    
//     return 0;
// }

// question 4 record breaker 
// int main(){
//     int n;
//     cin>>n;
//     int a[n+1];
//     a[n]=-1;
//     for (int i = 0; i < n; i++)
//     {
//           cin>>a[i];
//     }
//     if (n==1)
//     {
// cout<<"1"<<endl;
// return 0;
//     }
//     int ans=0;
//     int mx=-1;
//     for (int i = 0; i < n; i++)
//     {
//        if (a[i]>mx && a[i]>a[i+1])
//        {
//            ans++;
//        }
//        mx=max(mx,a[i]);
      
//     }
//     cout<<ans<<endl;
    
//     return 0;
// }