#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    string n;
getline(cin,n);
string a="abcdefghijklmnopqrstuvwxyz";
int count=0;
for (int i = 1; i < n.length(); i+=3)
{
    if (a.find(n[i])!=-1)
    {
        a.erase(a.find(n[i]),1);
        count++;
    }
}   
cout<<count<<endl;
return 0;
}