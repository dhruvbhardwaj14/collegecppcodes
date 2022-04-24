#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int s ,int e){//as it returns the index if pivot
   int pivot=arr[e];
   int i=s-1;
   for (int j = s; j < e; j++)
   {
       if (arr[j]<pivot)
       {
           i++;
           swap(arr,i,j);
       }
   }
   swap(arr,i+1,e);
   return i+1;

}
void quicksort(int arr[],int s,int e){//time complexity-best case(nlogn)
// worst case(O(n^2))
    if (s<e)
    {
        int pi=partition(arr,s,e);
        quicksort(arr,s,pi-1);
        quicksort(arr,pi+1,e);
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
    quicksort(arr,0,n-1);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
return 0;
}