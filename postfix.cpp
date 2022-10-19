#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
//q1 infix to postfix conversion
int prec(char c){//precedence of operator
if (c=='^')
{
    return 3;
}
else if (c=='/' || c=='*')
{
    return 2;
}
else if(c=='+' || c=='-'){
    return 1;
}
else{
    return -1;
}
}

string infixtopostfix(string s){
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while (!st.empty() && st.top()!='(')
            {
               res+=st.top();
               st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            } 
        }
        else{
            while (!st.empty() && prec(st.top())>prec(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
    
}
// q2 postfix evaluation
// int postfixevaluation(string s){
//     stack<int> st;
//     for (int i =0; i<s.length(); i++)
//     {
//         if (s[i]>='0' && s[i]<='9')
//         {
//              st.push(s[i]-'0');//pushed as an integer
//         }
//         else{
//             int op2=st.top();
//             st.pop();
//             int op1=st.top();
//             st.pop();

//             switch (s[i])
//             {
//             case '+':
//                st.push(op1+op2);
//                break;
//             case '-':
//                st.push(op1-op2);
//                break;
//             case '*':
//                st.push(op1*op2);
//                break;
//             case '/':
//                st.push(op1/op2);
//                break;
//             case '^':
//                st.push(pow(op1,op2));//inherit <math.h>
//                 break;
//             }
//         }
//     }
//     return st.top();
    
// }

int main(){
    // string s;
    // cin>>s;
    // cout<<postfixevaluation(s)<<endl;
    // cout<<postfixevaluation("46+2/5*7+")<<endl;

    string s;
    cin>>s;
    cout<<infixtopostfix(s)<<endl;
    // cout<<infixtopostfix("(a-b/c)*(a/k-l)")<<endl;


return 0;
}