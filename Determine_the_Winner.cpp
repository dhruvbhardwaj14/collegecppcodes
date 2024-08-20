#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int pa,pb,qa,qb;
        cin>>pa>>pb>>qa>>qb;
        if (max(qa,qb)>max(pa,pb))
        {
            cout<<"P"<<endl;
        }
       else if (max(qa,qb)<max(pa,pb))
        {
            cout<<"Q"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
    
return 0;
}