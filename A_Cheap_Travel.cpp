#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int temp=n%m;
    if (m*a<=b)
    {
        cout<<n*a<<endl;
    }
    else{
        cout<<((n/m)*b+min(temp*a,b))<<endl;
    }
return 0;
}