#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
#define n 100
class Stack{
    int* arr;
    int top;
    
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if (top==n-1)
        {
            cout<<"Stack overflow"<<endl;
        return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if (top==-1)
        {
            return;
        }
        // return arr[top];
        top--;
    }
    int Top(){
        if (top==-1)
        {
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.Top()<<endl;
return 0;
}

//using stl stack
// #include<iostream>
// #include<cmath>
// #include<stack>//for including stack
// #include"bits/stdc++.h"
// using namespace std;
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     st.push(5);
//     st.push(6);
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.empty()<<endl;
// return 0;
// }

//using queues-push method costly
// class Stack{
//     int n;
//      queue<int> q1;
//      queue<int> q2;
//      public:
//      Stack(){
//          n=0;
//      }
//      void push(int x){
//          q2.push(x);
//          n++;
//          while (!q1.empty())
//          {
//              q2.push(q1.front());
//              q1.pop();
//          }
//         queue<int> temp=q1;
//         q1=q2;
//         q2=temp;
//      }
//      void pop(){
//          q1.pop();
//          n--;
//      }
//      int top(){
//          return q1.front();
//      }
//      int size(){
//          return n;
//      }
//  };
// int main(){
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.size()<<endl;
// return 0;
// }

//using queues-pop method costly
// class Stack{
//     int n;
//     queue<int> q1;
//     queue<int> q2;
//     public:
// Stack(){
//     n=0;
// }
// void pop(){
//     if (q1.empty())
//     {
//         cout<<"empty stack"<<endl;
//         return;
//     }
//     while (q1.size()!=1)
//     {
//         q2.push(q1.front());
//         q1.pop();
//     }
//     q1.pop();
//     n--;

//     queue<int> temp=q1;
//     q1=q2;
//     q2=temp;  
// }
// void push(int x){
//     q1.push(x);
//     n++;
// }
// int top(){
//     if (q1.empty())
//     {
//         return -1;
//     }
//     while (q1.size()!=1)
//     {
//         q2.push(q1.front());
//         q1.pop();
//     }
//     int ans=q1.front();
//     q2.push(ans);
//     queue<int> temp=q1;
//     q1=q2;
//     q2=temp;
//     return ans;
// }
// int size(){
//     return n;
// }

// };
// int main(){
//     Stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.size()<<endl;
// }

//largest rectangle code-stack approach
// int get_max_area(vector<int> a){
//     int n=a.size(),ans=0,i=0;
//     a.push_back(0);stack<int> s;
//     while(i<n){
//         while (!a.empty() and a[s.top()]>a[i]){
//             int t=s.top();
//             int h=a[t];
//             s.pop();
//             if (s.empty())
//             {
//                ans=max(ans,h*i);
//             }
//             else{
//                 int len=i-s.top()-1;
//                 ans=max(ans,h*len);
//             }
            
//         }
//         s.push(i);
//         i++;
//     }
//     return ans;
// }
// int main(){
//     vector<int> a;
//     a.push_back(2);
//     a.push_back(1);
//     a.push_back(5);
//     a.push_back(6);
//     a.push_back(2);
//     a.push_back(3);
//     cout<<get_max_area(a)<<endl;
//     return 0;
// }