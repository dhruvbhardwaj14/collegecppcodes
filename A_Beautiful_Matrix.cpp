#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int diff(int a,int b){
    if (a>b)
    {
        return (a-b);
    }
    else return (b-a);
}

int main(){
    int a[5][5];
    int count=0;
    for (int i = 0; i < 5; i++)
    {
            for (int j = 0; j < 5; j++)
            {
                   cin>>a[i][j];
            }  
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j]==1)
            {
                 cout<<diff(i,2)+diff(j,2)<<endl;
            }
            
        }
        
    }
return 0;
}