#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;

    // returntype functionname(parameters with datatypes){body of function}
    // call the function inside a int main but make function outside int main and also give only variable names  


    // question1 write all the prime numbers between two numbers using functions 

//     bool isprime(int n){
//     if (n==1)
//     {
//         return false;

//     }
//     else{

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n%i==0)
//         {
//             return false;

//         }
        
//     }
//     return true;
//     }
//     }
//     int main()
// {
//     int a,b;
//     cin>>a>>b;
//     for (int i = a; i <= b; i++)
//     {
//       if (isprime(i)==true)
//       {
//          cout<<i<<endl;
//       }
      
//     }
    
//         return 0;
// }

// question fibonacci series
// void fibonacci(int n){
//     int t1=0;
//     int t2=1;
//     int nextterm;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<t1<<endl;
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;
        
//     }
    
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     fibonacci(n);
//         return 0;

// }

// questions on factorial n

// long long int factorial(long long int n){
//     long long int prod=1;
//            for (long long int i = n; i >= 1; i--)
//            {
//               prod=prod*i;
//            }
//     return prod;
// }
// int main(){
//     long long int n;
//     cin>>n;
//     cout<<factorial(n)<<endl;;
// }

// question find ncr 
// long long int factorial(long long int n){
//     long long int prod=1;
//            for (long long int i = n; i >= 1; i--)
//            {
//               prod=prod*i;
//            }
//                return prod;
// }
// int main(){
//       int n,r;
//       cin>>n>>r;
    //   int deno=(n-r);
    //   int ncr=factorial(n)/(factorial(deno)*factorial(r));
    //   if (n>=r)
    //   {
    //   cout<<ncr<<endl;
    //   }
    //   else{
    //       cout<<"N must be greater than r"<<endl;
    //   }
//     return 0;
// }

// question pascals triangle 
// long long int factorial(long long int n){
//     long long int prod=1;
//            for (long long int i = n; i >= 1; i--)
//            {
//               prod=prod*i;
//            }
//                return prod;
// }

// int binocoeff(int n , int r){
// int deno=(n-r);
//       int ncr=factorial(n)/(factorial(deno)*factorial(r));
//       return ncr;
// }
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<binocoeff(i,j)<<" ";
//         }
        
//     cout<<endl;
//     }
    
//     return 0;

// }
// NOTE-
// void function needs to be called as //function name only
// datatype function needs to be called as //cout<<function name
// condition?phla output for true:dusra output for false

// int simpleinterest(int p,const float r=2,int t=1){
//     float s=(float)(p*r*t/100);
//     return s;
// }

// int volume(int s){return s*s*s;}
// int volume(int r,int h){return 3.14*r*r*h;}
// int volume(int l,int b,int h){return l*b*h;}
// int main(){
//     // cout<<simpleinterest(10000)<<endl
//    cout<<volume(7,2,6)<<endl;
//     return 0;}
// const:-
// // its value cannot be changed in the function
// // if default  then cannot be called with a diff value


// call by reference
// means to call the function through pointers

//trying to achieve function overloading by default arguements
// void hey(int x){
//     cout<<"I am first hey"<<endl;
// }
// void hey(int x=1){
//     cout<<"I am second hey"<<endl;
// }
// int main(){
//     hey(2);
//     return 0;
// }


