#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,m,sx,sy,d;
cin>>n>>m>>sx>>sy>>d;
long long int x=sx+d;
long long int y=sy+d;
if (x==n)
{
    if (y>=m || sy>=m)
    {
        cout<<-1<<endl;
    }
    else{
    cout<<((n-1)+(m-1))<<endl;
}
}
else if (y==m)
{
    if (sx>=n || x>=n)
    {
        cout<<-1<<endl;
    }
    else{
    cout<<((n-1)+(m-1))<<endl;
}
} 

}
return 0;
}