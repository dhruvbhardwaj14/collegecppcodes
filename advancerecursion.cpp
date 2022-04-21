#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
//q1 permutations of a string 
// void permutation(string s,string ans){
//         if (s.length()==0)
//         {
//             cout<<ans<<endl;
//             return;
//         }
//         for (int i = 0; i < s.length(); i++)
//         {
//             char curr=s[i];
//             string ros=s.substr(0,i)+s.substr(i+1);
//             permutation(ros,ans+curr) ;    
//         }   
//     }

//q2  number of paths possible from start to end when a dice is rolled
// int countpath(int start,int end){
//     int count=0;
//     if (start==end || end-start==1)
//     {
//         count+=1;
//         return count;
//     }
//     if (end-start>=7)
//     {
//         count+=1;
//     }
//     if (start>end)
//     {
//         return 0;
//     }
//     for (int i = 1; i < 7; i++)
//     {
//         count+=countpath(start+i,end); 
//     }
//     return count;
// }

//q3 count number of path in a maze from (0,0) rules-either you can go down or right 
// int countmaze(int n,int i,int j){
//     int count=0;
//     if (i==n-1 || j==n-1)
//     {
//         count+=0;
//     }
//     if (i>=n || j>=n)
//     {
//         return 0;
//     }
    
//     if (i==n-1 && j==n-1)
//     {
//         count+=1;  
//         return count;
//     }
//    count+=countmaze(n,i+1,j)+countmaze(n,i,j+1);
//    return count;
// }

//q4 Given a"2xn" board and tiles of size "2x1",count number of ways to tile that board using those tiles
// int counttiles(int n){
//     if (n==0)
//     {
//         return 0;
//     }
    
//     if (n==1)
//     {
//        return 1;
//     }

//     int count=0;
//     //horizontal
//     count+=counttiles(n-2);
//     //vertical
//     count+=counttiles(n-1);
//     return count;

// }

//q5 pair or unpair n friends 
// int pairways(int n){
//     if (n==0||n==1||n==2)
//     {
//         return n;
//     }
//     return pairways(n-1)+pairways(n-2)*(n-1);
// }

//q6 knapsack problem-put n items of a given weight and value in a knapsack of capacity W to get the maximum total value in knapsack

int knapsack(int val[],int wt[],int num,int capacity){
    if (num==0 || capacity==0)
    {
        return 0;
    }
    
    //included the object
    // knapsack(val,wt,num-1,capacity-wt[num-1])+val[num-1];
    //not included the object
    // knapsack(val,wt,num-1,capacity);
    if (wt[num-1]>capacity)
    {
        return knapsack(val,wt,num-1,capacity);
    }
        int ans=max(knapsack(val,wt,num-1,capacity),knapsack(val,wt,num-1,capacity-wt[num-1])+val[num-1]);
        return ans;
    
    
}
int main(){
    // string s;
    // string ans="";
    // cin>>s;
    // permutation(s,ans);

    // int start,end;
    // cin>>start>>end;
    // cout<<countpath(start,end);

    // int n;
    // cin>>n;
    // cout<<countmaze(n,0,0);

    // int n;
    // cin>>n;
    // cout<<counttiles(n);

    // int n;
    // cin>>n;
    // cout<<pairways(n);

    int wt[]={10,20,30};
    int val[]={100,50,150};
    int capacity=50;
    cout<<knapsack(val,wt,3,capacity);
return 0;
}