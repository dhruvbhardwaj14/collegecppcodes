#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
 
using namespace std;
//selection sort
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//    cin>>arr[i];
// }
// for (int i = 0; i < n-1; i++) //3 8 7 2 9 1
// {
//     for (int j = i+1; j < n; j++)//3-
//     {
//         if (arr[j]<arr[i])
//         {
//             int temp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=temp;
//         }
        
//     }
// }
// for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// return 0;
// }

// question of chocolates 
// int main(){
//     int n;
//     cin>>n;
//     int w=n;
//     int c=n;
//     while (w>= 3)
//     {
//             c+=w/3;
//             w=w/3 + w%3;
        
//     }

//     cout<<c<<endl;
    
    
//     return 0;
// }

// bubblesort 

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
// cin>>arr[i];
//     }
//     int counter=1;
//     while (counter<n)
//     {
//         for (int i = 0; i < n-counter; i++)
//         {
//               if (arr[i]>arr[i+1])
//               {
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//               }
              
//         }
//         counter++; 
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//     cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    


//     return 0;
// }


// insertion sort 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
// cin>>arr[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
// int current=arr[i];
// int j=i-1;
// while (arr[j]>current && j>=0)
// {
//     arr[j+1]=arr[j];
//     j--;
// }
// arr[j+1]=current;

//     }
// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<' ';
// }
// cout<<endl;
    
//     return 0;
// }

// question horse races 
int main()
{
    int n;
    cin>>n;
    int r=0;
    int h=n;
    while (h>=5)
    {   
        r+=h/5;
        h= h/5 + h%5;
        cout<<r<<" "<<h<<endl;
    }
    if (h>1)
    {
        r+=1;
    }
    cout<<r<<endl;

    
    return 0;
}
// 28