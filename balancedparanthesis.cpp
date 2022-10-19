#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
//q1 check if a string has balance paranthesis or not
bool balancedparanthesis(string s){
    stack<char> st;
    bool ans=true;
    for (int i = 0; i < s.length(); i++)
    {
       if (s[i]=='{' || s[i]=='(' || s[i]=='[')
       {
          st.push(s[i]);
       }
       else if(s[i]==')'){
           if (!st.empty() && st.top()=='(')
           {
               st.pop();
           }
           else{
               ans=false;
               break;
           }
       }
       else if(s[i]==']'){
           if (!st.empty() && st.top()=='[')
           {
               st.pop();
           }
           else{
               ans=false;
               break;
           }
       }
       else if(s[i]=='}'){
           if (!st.empty() && st.top()=='{')
           {
               st.pop();
           }
           else{
               ans=false;
               break;
           }
       }
       else{
           st.push(s[i]);
       }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    if (balancedparanthesis(s))
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
return 0;
}