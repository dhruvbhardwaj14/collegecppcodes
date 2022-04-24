#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
 void merge(int arr[],int s,int mid,int e){
     int n1=mid-s+1;//size of first temp array
     int n2=e-mid;//size of second temp array
     int a[n1],b[n2];//temp arrays
     for (int i = 0; i < n1; i++)
     {
         a[i]=arr[s+i];
     }
     for (int i = 0; i < n2; i++)
     {
         b[i]=arr[mid+1+i];
     }
     int i=0;//pointer for first array
     int j=0;//pointer for second array
     int k=s;//pointer for main array
     while (i<n1 && j<n2)
     {
         if (a[i]<b[j])
         {
             arr[k]=a[i];
             i++;
             k++;
         }
         else if(a[i]>b[j])
         {
             arr[k]=b[j];
             j++;
             k++; 
         }
     }
     //this loop won't run if any of i and j reaches last of arr so
     while (i<n1)
     {
         arr[k]=a[i];
         i++;
         k++;
     }
     while (j<n2)
     {
         arr[k]=b[j];
         j++;
         k++;
     }
      }
void mergesort(int  arr[],int s,int e){
    if (s<e)
    {
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e); 

    merge(arr,s,mid,e);
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
    mergesort(arr,0,n-1);
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
return 0;
}