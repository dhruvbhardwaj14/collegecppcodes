#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
 
using namespace std;
int main(){
string s;
getline(cin,s);


// Q1 convert upper case;
// for (int i = 0; i < s.size(); i++)
// {
//       if (s[i]>='a' && s[i]<='z')
//       {
//           s[i]-=32;
//       }
      
// }
// cout<<s<<endl;

// Q1 convert same into lower case
// for (int i = 0; i < s.size(); i++)
// {
//       if (s[i]>='A' && s[i]<='Z')
//       {
//           s[i]+=32;
//       }
      
// }
// cout<<s<<endl;

// Q1 inbuilt tranforming function
// transfor(start index,end index,from where to start upper case, :: toupper/tolower) 
// transform(s.begin(),s.end(),s.begin(),::toupper);
// // transform(s.begin(),s.end(),s.begin(),::tolower);
// cout<<s<<endl;

// Q2 form a biggest number
// if not want to use reverse then for sorting in decreasing order use greater <datatype> ()
// sort(s.begin(),s.end(),greater<int>());
// // reverse(s.begin(),s.end());
// cout<<s<<endl;

// Q3 Character occuring maximum times 
int a[26];
for (int i = 0; i < 26; i++)
{
    a[i]=0;
}
for (int i = 0; i < s.size(); i++)
{
    a[s[i]-'a']++;
}
int maxi=0;
char temp='a';
for (int i = 0; i < 26; i++)
{
    if (a[i]>maxi)
    {
        maxi=max(a[i],maxi);
        temp=i+'a';
    }
    
}
cout<<temp<<endl;
cout<<"count"<<maxi<<endl;
return 0;
}