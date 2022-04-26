#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
void swaparr(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void wavesort(int arr[],int n){//Time complexity-O(N)
    int i=1;
    while (i<=n-1)
    {
        if (arr[i]>arr[i-1])
        {
            swaparr(arr,i,i-1);
        }
        if (arr[i]>arr[i+1] && i<=n-2)
        {
            swaparr(arr,i,i+1);
        }
        i+=2;
    }
}
int main(){int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    wavesort(arr,n);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}