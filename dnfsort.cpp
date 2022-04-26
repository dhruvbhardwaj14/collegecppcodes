#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
void swaparr(int arr[],int mid,int low){
    int temp=arr[mid];
    arr[mid]=arr[low];
    arr[low]=temp;
}
void dnfsort(int arr[],int n){//time complexity-O(N)
    int low=0;
    int mid=0;
    int high=n-1;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swaparr(arr,mid,low);
            low++;
            mid++;
        }
        else if (arr[mid]==2)
        {
            swaparr(arr,mid,high);
            high--;
        }
        else{
            mid++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    dnfsort(arr,n);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}