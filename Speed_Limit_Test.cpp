#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,x,y;
cin>>a>>b>>x>>y;
if (((float)a/x)==((float)b/y))
{
    cout<<"EQUAL"<<endl;
}
else if (((float)a/x)>((float)b/y)){
    cout<<"ALICE"<<endl;
}
else{
    cout<<"BOB"<<endl;
}
}
return 0;
}