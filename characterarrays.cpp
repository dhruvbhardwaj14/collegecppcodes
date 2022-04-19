#include<iostream>
#include<cmath>
#include "bits/stdc++.h"
using namespace std;

// // palindrom 
// int main(){
// int n;
// cin>>n;
// char a[n+1];
// cin>>a;
// bool check=1;
// for (int i = 0; i < n; i++)
// {
//     if(a[i]!=a[n-i-1]){
//         check=0;
//         break;
//     }
// }
// if (check==true)
// {
//    cout<<"palindrome"<<endl;
// }
// else 
// {cout<<"not palindrome"<<endl;}

// return 0;
// }

// largest word in a sentence 
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n+1);
    cin.ignore();

int i=0;
int curr=0;
int maxl=0;
int s=0; int e=0;
while (1)
{
    if (a[i]=='\0' || a[i] ==' ')
    {
      if (curr>maxl)
      {
          maxl=max(maxl,curr);
          e=s;
      }
      curr=0;
      s=i+1;
    }
    else{

    curr++;
    }
    if (a[i] == '\0')
    {
        break;
    }
    
    i++;
}
for (int i = 0; i < maxl; i++)
{
    cout<<a[i+e];
}
cout<<endl;
cout<<maxl<<endl;
return 0;
}