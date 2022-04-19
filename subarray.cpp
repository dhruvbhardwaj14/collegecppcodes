#include <iostream>
#include <cmath>
#include "bits/stdc++.h"

using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>a[i];
// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = i; j < n; j++)
//     {
//         for (int k = i; k <=j; k++)
//         {
//         cout<<a[k]<<" ";

//         }
// cout<<endl;

//     }

// }
// return 0;
// }

// question 1 maximu subarray sum
// normal sum approach;
// int main(){
// int n;
// cin>>n;
// int a[n];
// int ans=0;
// for (int i = 0; i < n; i++)
// {
//     cin>>a[i];
// }
// int curr=0;
// for (int i = 0; i < n; i++)
// {
//     for (int j = i; j < n; j++)
//     {
//         for (int k = i; k <=j; k++)
//         {
//         curr+=a[k];
//         }
//         ans=max(curr,ans);
//         curr=0;
//     }

// }
// cout<<ans<<endl;
// return 0;
// }

// cumulative sum apporach

// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
// cin>>a[i];
//     }
//     int currsum[n+1];
//     currsum[0]=0;
//     for (int i = 1; i <= n; i++)
//     {
//           currsum[i]=currsum[i-1]+ a[i-1];
//     }
//     int maxsum=INT_MIN;
// for (int i = 1; i <= n; i++)
// {
//     int sum=0;
//     for (int j = 0; j < n; j++)
//     {
//         sum=currsum[i]-currsum[j];
//         maxsum=max(maxsum,sum);
//     }

// }
// cout<<maxsum<<endl;
//     return 0;
// }

// KADANE'S APPROACH
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
// cin>>a[i];
//     }
//     int curr=0;
//     int maxsum=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     curr+=a[i];
    //     if (curr<0)
    //     {
    //         curr=0;
    //     }
    //     maxsum=max(maxsum,curr);

    // }
    // cout<<maxsum<<endl;
//     return 0;}

// question 2 MAXIMUM CIRCULAR SUBARRAY SUM
// int kadane(int arr[],int n){
//     int curr=0;
//     int maxsum=INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         curr+=arr[i];
//         if (curr<0)
//         {
//             curr=0;
//         }
//         maxsum=max(maxsum,curr);

//     }
//     return maxsum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int wrapsum;
//     int nonwrap;
//     nonwrap=kadane(a,n);
//     int totalsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         totalsum+=a[i];
//         a[i]=-a[i];
//     }
//     wrapsum=totalsum+kadane(a,n);
//     cout<<max(wrapsum,nonwrap)<<endl;
//     return 0;
// }
// question 3 PAIR SUM EQUAL TO GIVEN SUM; 
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     int sum;
//     cin>>sum;
//     int curr=0;
//     int flag=0;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             curr+=a[i]+a[j];
//             if (curr==sum && flag<1)
//             {
//                 flag+=1;
//                 cout<<a[i]<<"&"<<a[j]<<endl;
//                 break;
//             }
//             else{
//                 curr=0;

//             }
//         }
        
//     }
//     if (flag==0)
//     {
//          cout<<false<<endl;
//     }
//     else{
//         cout<<true<<endl;
        
//     }
    
//     return 0;
// }

// BETTER TIME COMPLEXITY 
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int s=0;
    int e=n-1;
    while (e>s)
    {
        if(a[s]+a[e]==sum){
            cout<<a[s]<<" "<<a[e]<<endl;
            cout<<true<<endl;
            return 0;
        }
        else if (a[s]+a[e]<sum)
        {
            s++;
        }
        else if (a[s]+a[e]>sum)
        {
            e--;
        }
        
    }
    cout<<false<<endl;
    return 0;
}