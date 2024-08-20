#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int w,x,y,z;
cin>>w>>x>>y>>z;
cout<<w+z*(x-y)<<endl;
}
return 0;
}