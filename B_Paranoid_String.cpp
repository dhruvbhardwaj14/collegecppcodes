#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=s.length();
        for (int i = 0; i <n; i++)
        {
            if (s.find("01")!=-1)
            {
               count++;
            }
            else if(s.find("10")!=-1){
                count++;
            }
            
        }
        
        
        

cout<<count<<endl;
    }
    
return 0;
}