#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int lastdigit(int n){
    long long int temp=n;
    bool flag=0;
    while (temp>0)
    {
        int last=temp%10;
        if (last!=4 && last!=7)
        {
            flag=1;
        }
        temp/=10;
    }
    return flag;
}
int main(){
    long long int n;
    cin>>n;
    bool flag1=lastdigit(n);
    float temp1;
    for (int i = 2; i <= n; i++)
    {
         temp1=(float)n/i;
         if (lastdigit(temp1)==0 && n%i==0 )
         {
            flag1=0;
         }
    }
    
    if (flag1==0)
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
    
return 0;
}