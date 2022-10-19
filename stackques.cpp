#include<iostream>
#include<cmath>
#include<stack>//for including stack
#include"bits/stdc++.h"
using namespace std;
//q1 reverse a string using stack
// void reversesentence(string s){
//      stack<string> st;
//      for (int i = 0; i < s.length(); i++)
//      {
//          string word="";
//          while (s[i]!=' '&&i<s.length())
//          {
//              word+=s[i];
//              i++;
//          }
//          st.push(word);
//      }
//      while (!st.empty())
//      {
//          cout<<st.top()<<" ";
//          st.pop();
//      }cout<<endl;
// }
//q2 reverse a stack
void insertatBottom(stack<int> &st,int temp){
    if (st.empty())
    {
       st.push(temp);
       return;
    }
    
    int topele=st.top();
    st.pop();
    insertatBottom(st,temp);
    st.push(topele);
}
void reversestack(stack<int> &st){
    if (st.empty())
    {
        return;
    }
    int temp=st.top();
    st.pop();
    reversestack(st);
    insertatBottom(st,temp);
    return;
    
}
void display(stack<int>st){
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
int main(){
    // string s;
    // getline(cin,s);
    // reversesentence(s);

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    display(st);
    reversestack(st);
    display(st);
return 0;
}