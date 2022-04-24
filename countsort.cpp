#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int maximumele(int arr[],int n){
    int max1=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max1=max(max1,arr[i]);
    }
    return max1;
}
void countsort(int arr[],int n){//time complexity-O(max(Ai,n))
    int k=maximumele(arr,n);
    int count[k];
    for (int i = 0; i < k; i++)
    {
        count[i]=0;
    }
    //updating values
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]+=1;
    }
    //modifying values to previous count sum
    for (int i = 1; i < k; i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    for (int i = n-1; i >=0; i--)
    {
        output[--count[arr[i]]]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=output[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];//={1,3,2,3,4,1,6,4,3};
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    countsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
return 0;
}