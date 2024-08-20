#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x,y;
cin>>x>>y;
// if (x>=0 && y>=0)
// {
//     cout<<0<<" "<<y<<" "<<(3*x-y)<<" "<<endl;
// }
// else if(x<0 && y>0){
//     cout<<(3*x-y)-(y+1)<<" "<<y<<" "<<y+1<<" "<<endl;   
// }
// else if(x<0 && y<0){
//     cout<<(3*x-y)<<" "<<y<<" "<<0<<" "<<endl;
// }
// else{
//     cout<<y+1<<" "<<y<<" "<<(3*x-y)-(y+1)<<" "<<endl;
// }
cout<<y<<" "<<y<<" "<<3*x-2*y<<endl;
}
return 0;
}