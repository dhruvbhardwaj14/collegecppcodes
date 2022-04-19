#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int s=m*n;
    int count=0;

    while (s!=0)
    {
        m--;
        n--;
        count++;
        s=m*n;
    }
    if (count%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
return 0;
}