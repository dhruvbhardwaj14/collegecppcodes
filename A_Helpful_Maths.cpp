#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
 
using namespace std;
int main(){
string a;
cin>>a;
string temp;
int k=0;
// cout<<temp<<" ";
int n=a.size();
for (int i = 0; i < a.size(); i+=2)
{
    temp.push_back(a[i]);
}
sort(temp.begin(),temp.end());
for (int i = 0; i < n; i+=2)
{
    a[i]=temp[k];
    k++;
}
cout<<a<<endl;
return 0;
}