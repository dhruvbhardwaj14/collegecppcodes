#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a[2][2];
int count=0;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        cin>>a[i][j];
        if (a[i][j]==1)
        {
            count++;
        }
    }
    
}
if (count<4 && count!=0 )
{
    cout<<1<<endl;
}
else if(count==0){cout<<0<<endl;}
else{ 
cout<<2<<endl;
}

}
return 0;
}