#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
//q1 rat in a maze
// -some paths in the board are blocked
// -rat can only move down or right and it at (0,0)
// input is given in form of a matrix where 0 denotes blocked and 1 denotes unblocked
// -output 2d matrix by which path the rat is reaching the end where 1 is for rat steps and 0 for not stepping that area
// bool issafe(int** arr,int x,int y,int n){
//     if (x<n && y<n && arr[x][y]==1)
//     {
//         return true;
//     }
//     return false;
// }//int **arr is used for passing a dynamic array

// bool ratinmaze(int** arr,int x,int y,int n,int** solArr){
//     //base condition
//     if (x==n-1 && y==n-1)
//     {
//         solArr[x][y]=1;
//        return true;
//     }
    
//     if (issafe(arr,x,y,n))
//     {
//         solArr[x][y]=1;
//         if (ratinmaze(arr,x+1,y,n,solArr))
//         {
//             return true;
//         }
//         if (ratinmaze(arr,x,y+1,n,solArr))
//         {
//             return true;
//         }
//         //backtrack-if none is true
//         solArr[x][y]=0;//-since path chosen is not valid
//         return false;
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     int** arr=new int*[n];//--to represent a array dynamically
//     for (int i = 0; i < n; i++)
//     {
//         arr[i]=new int[n];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     int** solArr=new int*[n];//--to represent a array dynamically
//     for (int i = 0; i < n; i++)
//     {
//         solArr[i]=new int[n];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             solArr[i][j]=0;
//         }
        
//     }
//     if (ratinmaze(arr,0,0,n,solArr))
//     {
//        for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<solArr[i][j]<<" ";
//         }
//         cout<<endl;
//     } 
//     } 

    
// return 0;
// }

//q2 permutations-given an array of distinct integers,return all the possible permutations .You can return the answer in any order.-do vectors first
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
// int main(){
// string s;
// cin>>s;
// permutation(s,"");
//     return 0;
// }

//q3 n queens problem
bool issafe(int** arr,int x,int y,int n){
    //column check
    for (int i = 0; i < x; i++)//since x tells the row no. 
    {
        if (arr[i][y]==1)
        {
            return false;
        }
    }
    
    //back diagonally check thing
    int row=x;
    int col=y;
    while (row>=0 && col>=0)
    {
       if (arr[row][col]==1)
       {
           return false;
       }
       row--;
       col--;
    }

    //front diagonally check thing
    row=x;
    col=y;
    while (row>=0 && col<n)
    {
       if (arr[row][col]==1)
       {
           return false;
       }
       row--;
       col++;
    }
    return true;
}
bool nQueen(int** arr,int x,int n){//cuz once it is safe to put in that row we will not further check any columns
if (x>=n)
{
    return true;
}
for (int i = 0; i < n; i++)//column
{
    if (issafe(arr,x,i,n))
    {
        arr[x][i]=1;
    
    if (nQueen(arr,x+1,n))
    {
        return true;
    }
    arr[x][i]=0;//backtracking
    }
}
    return false;
}
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=0;
        } 
    }
    if (nQueen(arr,0,n))
    {
       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    } 
    }
    
    return 0;
}