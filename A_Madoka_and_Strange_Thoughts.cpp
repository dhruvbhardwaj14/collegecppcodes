#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;

cout<<n+(2*((n/2)+(n/3)))<<endl;
}
return 0;
}