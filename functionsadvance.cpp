#include<iostream>
#include<cmath>
#include "bits/stdc++.h"
using namespace std;
// sum of first n natural numbers
// int sum(int n){
//     int ans=0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans=ans+i;
//     }
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n)<<endl;
// return 0;
// }

// pythagorean triplet 
// bool pytha(int a,int b,int c){
//     int x=max(a,max(b,c));
//     int y,z;
//     if (x==a)
//     {
//         y=b;
//         z=c;
//     }
//     if (x==b)
//     {
//         y=a;
//         z=c;
//     }
//     if (x==c)
//     {
//         y=b;
//         z=a;
//     }
    
//     if (pow(x,2)==pow(y,2)+pow(z,2))
//     {
//        return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//  int x,y,z;
//  cin>>x>>y>>z;
//  if (pytha(x,y,z))
//  {
// cout<<"yes pythagorean triplet"<<endl;
//  }
//  else{
// cout<<"no pythagorean triplet"<<endl;
//  }
//     return 0;
// }




// question conversions 

//  1.binary to decimal 

// int binarytodecimal(int n){
// int ans=0;
// int x=1;
// while (n>0){
//     int y=n%10;
//     ans+=x*y;
//     x*=2;
//     n/=10;
// }
// return ans;
// }


//  2.octal to decimal 


// int octaltodecimal(int n){
//     int ans=0;
// int x=1;
// while (n>0){
//     int y=n%10;
//     ans+=x*y;
//     x*=8;
//     n/=10;
// }
// return ans;


// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<octaltodecimal(n)<<endl;
//     return 0;
// }


// 3. hexadecimal to decimal


// int hexadecimaltodecimal(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     for (int i = s-1; i >=0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//            ans+=x*(n[i]-'0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             ans+=x*(n[i]-'A'+10);
//         }
//         x*=16;

//     }
    
// return ans;
// }

// int main(){
//     string n;
//     cin>>n;
//     cout<<hexadecimaltodecimal(n)<<endl;
//     return 0;
// }

// 4. decimal to binary 

// int decimaltobinary(int n){
//     int x=1;
//     int ans=0;
//     while (x <= n)
//     {
//         x*=2;
//     }
//     x/=2;
//     while (x>0)
//     {
//          int lastdigit=n/x;
//          n-=lastdigit*x;
//          x/=2;
//          ans=ans*10+lastdigit;

//     }
//     return ans;
    
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<decimaltobinary(n)<<endl;

//     return 0;
// }

// 5. decimal to octal 
 
//  int decimaltooctal(int n){
//     int x=1;
//     int ans=0;
//     while (x <= n)
//     {
//         x*=8;
//     }
//     x/=8;
//     while (x>0)
//     {
//          int lastdigit=n/x;
//          n-=lastdigit*x;
//          x/=8;
//          ans=ans*10+lastdigit;

//     }
//     return ans;

//  }

//  int main(){
//     int n;
//     cin>>n;
//     cout<<decimaltooctal(n)<<endl;

//     return 0;
// }

// 6. decimal to hexadecimal 

// string decimaltohexadecimal(int n){
//              int x=1;
//              string ans=" ";
//              while (x<=n)
//              {
//                  x*=16;
//              }
//              x/=16;
//              while (x>0)
//              {
//                  int lastdigit=n/x;
//                  n-=lastdigit*x;
//                  x/=16;
//                  if (lastdigit<=9)
//                  {
//                     ans=ans + to_string(lastdigit);
//                  }
//                  else{
//                      char c= 'A'+lastdigit-10;
//                      ans.push_back(c);
//                  }
//              }
//              return ans;
// }




//  int main(){
//     int n;
//     cin>>n;
//     cout<<decimaltohexadecimal(n)<<endl;

//     return 0;
// }

// question addition of binary numbers 

// int reverse(int n){
//     int ans=0;
//     while (n>0)
//     {
//         int lastdigit=n%10;
//         ans=ans*10+ lastdigit;
//         n/=10;
//     }
//     return ans;
// }

// int addbinary(int a,int b){
//     int ans=0;
//     int prev_carry=0;
//     while (a>0 && b>0)
//     {
//         if (a%2==0 && b%2==0)
//         {
//             ans=ans*10 + prev_carry;
//             prev_carry=0;
//         }
//         else if ((a%2==1 && b%2==0) || (a%2==0 && b%2==1))
//         {
//             if (prev_carry==1)
//             {
//             ans=ans*10 + 0;
//             prev_carry=1;
//             }
//             else{
//                 ans=ans*10 + 1;
//                 prev_carry=0;
//             }
            
            
//         }
//         else{
//             ans=ans*10+prev_carry;
//             prev_carry=1;
//         }
//         a/=10;
//         b/=10;
        
//     }
//     while (a>0){
//         if (prev_carry==1){
//         if (a%2==1)
//         {
//             ans=ans*10+0;
//             prev_carry=1;
//         }
//         else{
//             ans=ans*10+1;
//             prev_carry=0;
//         }
//     }
//     else{
//         ans=ans*10+(a%2);
//     }
//     a/=10;
//     }
//     while (b>0){
//         if (prev_carry==1){
//         if (b%2==1)
//         {
//             ans=ans*10+0;
//             prev_carry=1;
//         }
//         else{
//             ans=ans*10+1;
//             prev_carry=0;
//         }
//     }
//     else{
//         ans=ans*10+(b%2);
//     }
//     b/=10;
//     }
//     if (prev_carry==1)
//     {
//         ans=ans*10+1;
//     }
//     ans=reverse(ans);
//     return ans;
//     }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<addbinary(a,b)<<endl;
//     return 0;
// }