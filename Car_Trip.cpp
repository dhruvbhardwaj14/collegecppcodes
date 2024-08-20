#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int x;
cin>>x;
int sum=3000;

if (x<300)
{
    cout<<sum<<endl;
}
else{
    cout<<sum+(x-300)*10<<endl;

}


}
return 0;
}