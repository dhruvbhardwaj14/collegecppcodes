#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// int linearsearch(int key,int arr[],int size){//O(n)
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int binarysearch(int arr[],int n,int key){//sorted array must be there
// sort(arr,arr+n);
// int start=0;
// int end=n-1;
// while (start<= end)
// {
//     int mid=(start+end)/2;
//     if (key==arr[mid])
//     {
//         return mid;
//     }
    
//     else if (key>arr[mid])
//     {
//        start=mid+1;
//     }
//     else{
//         end=mid-1;
//     }
// }
// return -1;
// }

// void selectionsort(int arr[],int n){
//     for (int i= 0; i <n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
            
//         }
        
//     }
    
// }

// void sinksort(int arr[],int n){
//     int counter=1;
//     while (counter<n)
//     {
//         for (int i = 0; i < n-counter; i++)
//         {
//             if (arr[i+1]<arr[i])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             } 
//         }
//         counter++;
//     }
    
// }

void bubblesort(int arr[],int n){
    int counter=n-1;
    // int comparison=0;
    while (counter>0)
    {
        for (int i = counter; i>=0; i--)
        {
            if (arr[i]<arr[i-1])
            {
                arr[i]=arr[i]+arr[i-1];
                arr[i-1]=arr[i]-arr[i-1];
                arr[i]=arr[i]-arr[i-1];  
            }
           
        }
            counter--;
    }
    // cout<<"Comparisons done- "<<comparison<<endl;
    
}

// void insertionsort(int arr[],int n){
//     for (int i = 1; i < n; i++)
//     {
//         int j=i-1;
//         int current=arr[i];
//         while (arr[j]>current)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//        arr[j+1]=current;
//     }
// }

int main(){
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    // int key;
    // cin>>key;
    // cout<<linearsearch(key,arr,size)<<endl;
    // cout<<binarysearch(arr,size,key);
    // selectionsort(arr,size);
    // sinksort(arr,size);
    // insertionsort(arr,size);
    bubblesort(arr,size);
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;

// int i=0;
// int e=1;
// while(i<size){
//     if (arr[i]<=arr[e])
//     {
//         e++;
//     }
//     else{

//     }
//     if (e==size-1)
//     {
//        i++;
//     }
    
    
// cout<<arr[i]<<"i";
// cout<<arr[e]<<"e";
// i++;
// e++;
return 0;
}

