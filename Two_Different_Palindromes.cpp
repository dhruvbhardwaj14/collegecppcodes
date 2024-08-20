#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int a,b;
cin>>a>>b;
if ((a+b)%2==0)
{
    if (a+b>2)
    {
        if (a%2==0 && b%2==0 && (a>1 && b>1))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
else{
    if (a+b>3 && (a>1 && b>1))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
return 0;
}