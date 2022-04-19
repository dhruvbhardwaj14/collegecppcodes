#include<iostream>
#include<cmath>
#include"bits/stdc++.h" 
 
using namespace std;

// question 1 repeating number 
// int main(){
// int n;
// cin>>n;
// int a[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>a[i];
// }
// const int N=1e6+2;
// int idx[N];
// for (int i = 0; i < N; i++)
// {
//     idx[i]= -1;
// }
// int minindx=INT_MAX;
// for (int i = 0; i < n; i++)
// {
//     if (idx[a[i]]!=-1)
//     {
//         minindx=min(minindx,idx[a[i]]);
//     }
//     else{
//     idx[a[i]]=i;
//     }
// }
// if (minindx==INT_MAX)
// {
//     cout<<-1<<endl;
// }
// else{
// cout<<minindx+1<<endl;
// }
// return 0;
// }

// question 2 subarray with given sum 
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];
//     }
//     int sum;
//     cin>>sum;
//     int curr=0;
//     int s=0;
//     int e=0;
//     for (int i = 0; i < n; i++)
//     {
        // if (curr+a[e]<sum)
        // {
        //     curr+=a[e];
        //     e++;
        // }
        // else if(curr+a[e]==sum){
        //     cout<<s+1<<" "<<e+1;
        //     return 0;
        // }
        // else{
        //     curr-=a[s];
        //     s++;
        // }
//     }
//     cout<<endl;
//     return 0;

// }

// question 3 first positive integere misisng 
// int main( ){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     const int N=1e6+1;
//     int check[N];
//     for (int i = 0; i < N; i++)
//     {
//         check[i]=false;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]>=0)
//         {
//         check[a[i]]=true;
//         }   
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (check[i]==false && a[i]>0)
//         {
//             cout<<i<<endl;
//             break;
//         }
        
//     }
    
    
//     return 0;
// }

