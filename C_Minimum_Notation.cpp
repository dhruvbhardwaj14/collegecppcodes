#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long int n=s.size();
char p=s[n-1];
for (long long int i = n-2; i>=0; i--)
{
    if (s[i]<=p)
    {
        p=s[i];
    }
    else{
        s[i]=min(char(int(s[i])+1),'9');
    }
}

// for (long long int i = 0; i < s.size(); i++)
// {
//     if (s[i]==p[t])
//     {
//         t++;
//     }
//     else{
//         if (s[i]!='9')
//         {
//             s[i]=char(int(s[i])+1);
//         }
//     }
// }
sort(s.begin(),s.end());
cout<<s<<endl;
}
return 0;
}