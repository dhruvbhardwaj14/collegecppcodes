#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
//q1 infix to prefix conversion
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

string infixtoprefix(string s){
    reverse(s.begin(),s.end());//same logic as postfix but reversed ans and input-but note that the condition will change  and closing ')' will become opening '(' and vice versa
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
        {
            res+=s[i];
        }
        else if(s[i]==')'){//here we changed brackets from postfix
            st.push(s[i]);
        }
        else if(s[i]=='('){//here we changed brackets from postfix
            while (!st.empty() && st.top()!=')')//here we changed brackets from postfix
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
    reverse(res.begin(),res.end());
    return res;//ans is sent only after reversing the string
    
}
//q2 prefix evaluation
// int prefixevaluation(string s){
//     stack<int> st;
//     for (int i = s.length()-1; i>=0; i--)
//     {
//         if (s[i]>='0' && s[i]<='9')
//         {
//              st.push(s[i]-'0');//pushed as an integer
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
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
    // // cout<<prefixevaluation("-+7*45+20")<<endl;
    // cout<<prefixevaluation(s)<<endl;


    string s;
    cin>>s;
    cout<<infixtoprefix(s)<<endl;
    // cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;


return 0;
}