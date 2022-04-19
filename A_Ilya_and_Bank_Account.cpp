#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int max1=INT_MIN;
    if (n>0)
    {
        cout<<n<<endl;
    }
    else{
        string s=to_string(n);
        int i=s.length()-2;
        string temp=s;
        while (i<s.length())
        {
           temp.erase(i,1);
           long long int p=stoi(temp);
           max1=max(p,max1);
           temp=s;
           i++;
        }
        cout<<max1<<endl;
    }
return 0;
}