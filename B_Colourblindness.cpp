#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
char a[2][n];
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>a[i][j];
        if (a[i][j]=='G')
        {
            a[i][j]='B';
        }
    }
}
bool flag=false;
for (int i = 0; i < n; i++)
{
    if (a[0][i]==a[1][i])
    {
        flag=true;
    }
    else{
        flag=false;
        break;
    }
}
if (flag)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}