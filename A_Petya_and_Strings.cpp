#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
 
using namespace std;
int main(){
string a,b;
cin>>a>>b;
for (int i = 0; i < a.size(); i++)
{
    if (a[i]>='A' && a[i]<='Z' )
    {
        a[i]=char(a[i]+32);
    }
    if ( b[i]>='A' && b[i]<='Z')
    {
        b[i]=char(b[i]+32);
    }
}
if (a>b)
{
    cout<<1<<endl;
}
if (b>a)
{
    cout<<-1<<endl;
}
if (a==b)
{
    cout<<0<<endl;
}

return 0;
}