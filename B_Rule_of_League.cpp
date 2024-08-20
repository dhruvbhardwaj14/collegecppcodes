#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x,y;
cin>>n>>x>>y;
int mn=min(x,y);
int mx=max(x,y);
if (mn==0 && mx>0)
{
    if ((n-1)%mx==0)
    {
        int count=1;
        int i=1;
        do
        {
            cout<<i<<" ";
            if (count%mx==0)
            {
                i=count+2;
            }
            count++;
        }while (count<=n-1);
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
else{
    cout<<-1<<endl;
}

}
return 0;
}