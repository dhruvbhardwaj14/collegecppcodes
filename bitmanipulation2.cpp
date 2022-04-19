#include<iostream>
#include<cmath>
#include"bits/stdc++.h" 
 
using namespace std;
// Q1 to check if a number is power of 2 
// int ispowerof2(int n){
//     return (n && !(n & n-1));
// }
// int main(){
//     cout<<ispowerof2(7)<<endl;
// return 0;
// }

// Q2 number of ones in a binary 
// int numberof1(int n){
//     int count=0;
//     while (n!=0)
//     {
//           n=n&n-1;
//           count++;
//     }
//     return count;
// }
// int main(){
//     cout<<numberof1(19)<<endl;
    
// return 0;
// }

// Q3 generate all possible subsets of a set 
// void subsets(int arr[], int n){
//     for (int i = 0; i < (1<<n); i++)
//     {
//           for (int j = 0; j < n; j++)
//           {
//               if (i & (1<<j))
//               {
//                   cout<<arr[j]<<" ";
//               }
              
//           }cout<<endl;
          
//     }
    
// }
// int main(){
//     int a[3]={1,2,3};
//     subsets(a,3);

// return 0;
// }

// Q4 find a unique number in a array where all except one are twice in array 
// int unique(int a[],int n){
//     int xorsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum=xorsum^a[i];
//     }
//     return xorsum;
// }
// int main(){
//     int a[7]={1,2,4,4,1,2,3};
//     cout<<unique(a,7)<<endl;
// return 0;
// }

// Q5 find two unique number in a array where all except two are twice in array 
// int setbit(int n,int pos){
//     return((n &(1<<pos))!=0);
// }
// void unique(int a[], int n){
//     int xorsum=0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum=xorsum^a[i];

//     }
//     int tempxor=xorsum;
//     int bit=0;
//     int pos=0;
//     while (bit!=1)
//     {
//           bit=xorsum&1;
//           pos++;
//           xorsum=xorsum>>1;
//     }
//     int newxor=0;
//     for (int i = 0; i < n; i++)
//     {
//           if (setbit(a[i],pos-1))
//           {
//               newxor=newxor^a[i];
//           }
          
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
// }
// int main(){
//     int a[8]={1,2,3,5,1,2,3,7};
//     unique(a,8);
// return 0;
// }

// Q6 find a unique number in a array where all except one are thrice in array 
int getbit(int n,int pos){
    return((n & (1<<pos))!=0);
}
int setbit(int n, int pos){
    return((n | (1<<pos)));
}
int unique(int a[],int n){
    int result=0;
    
    for (int i = 0; i < 64; i++)
    {
    int sum=0;
    for (int j = 0; j < n; j++)
    {
        if (getbit(a[j],i))
        {
           sum++;

        }
        
    }
    if (sum%3!=0)
    {
       result=setbit(result,i);
    }
    }
    return result;
    
}
int main(){
    int a[10]={1,2,3,1,2,3,1,2,3,4};
    cout<<unique(a,10)<<endl;
    return 0;
}