#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// int main(){
//      int n;
//      cin>>n;
//     int prevsum=0;
//      for (int i = 0; i <=n; i++)
//      {
//          prevsum+=i;
//      }
//      cout<<prevsum<<endl;
// return 0;
// }

// Q1 check if array is sorted
// bool sortedarray(int a[],int n){
//     if (n==1)
//     {
//         return 1;
//     }
//     int restarray=sortedarray(a+1,n-1);
//     return (a[0]<a[1] && restarray);
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     } 
//     cout<<sortedarray(a,n)<<endl;

//     return 0;
// }

// q2 inc dec number 
void dec(int n){
    if (n==0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void inc(int n){
    if (n==0)
    {
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int firstocc(int a[],int n,int k,int i){
    if (i==n)
    {
        return -1;
    }
    if (a[i]==k)
    {
        return i;
    }
    return firstocc(a,n,k,i+1);   
}
int lastocc(int a[],int n,int k,int i){
    if (i==n)
    {
        return -1;
    }
    int lastarray=lastocc(a,n,k,i+1);
    if (lastarray!=-1)
    {
        return lastarray;
    }
    if (a[i]==k)
    {
        return i;
    }
    return -1;
}
int main(){
    // int n;
    // cin>>n;
    // int k;
    // cin>>k;
    int a[]={4,2,1,2,5,2,7};
    // cout<<k<<endl;
    cout<<firstocc(a,7,2,0)<<endl;
    cout<<lastocc(a,7,2,0)<<endl;
    // dec(n);
    // inc(n);
    return 0;
}
