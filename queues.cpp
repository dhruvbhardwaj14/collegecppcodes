#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
// #define n 20-for array implementation
using namespace std;
//array implementation
// class queues{
//     int* arr;
//     int front;
//     int back;
//     public:
//     queues(){
//         arr=new int[n];
//         front=-1;
//         back=-1;
//     }
//     void push(int x){
//         if (back==n-1)
//         {
//             cout<<"Full Queue"<<endl;
//             return;
//         }
//         back++;
//         arr[back]=x;
//         if (front==-1)
//         {
//             front++;
//         }
//     }
//     void pop(){
//         if (front==-1 || front>back)
//         {
//             cout<<"Empty Queue"<<endl;
//             return;
//         }
//         front++;
//     }
//     int peek(){
//         if (front==-1 || front>back)
//         {
//             cout<<"Empty Queue"<<endl;
//             return -1;
//         }
//         return arr[front];
//     }
//     bool empty(){
//         if (front==-1 || front>back)
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main(){
//     queues q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<q.peek()<<endl;
//         q.pop();
//     }
//     cout<<q.empty()<<endl;

// return 0;
// }

//linkedlist implementation
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class queues{
//     node* front;
//     node* back;
//     public:
//     queues(){
//         front=NULL;
//         back=NULL;
//     }
//     void push(int x){
//         node* n=new node(x);
//         if (front==NULL)
//         {
//             back=n;
//             front=n;
//             return;
//         }
        
//         back->next=n;
//         back=n;
//     }
//     void pop(){
//         if (front==NULL)
//         {
//             cout<<"Queue underflow"<<endl;
//             return;
//         }
//         node* todelete=front;
//         front=front->next;
//         delete todelete;
//     }
//     int peek(){
//         if (front==NULL)
//         {
//             cout<<"Empty queue"<<endl;
//             return -1;
//         }
//         return front->data;
//     }
//     bool empty(){
//         if (front==NULL)
//         {
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     queues q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<q.peek()<<endl;
//         q.pop();
//     }
//     cout<<q.empty()<<endl;
    
//     return 0;
// }

//queues using stack
// class queues{
// stack<int> s1;
// stack<int> s2;
// public:
// void push(int x){
// s1.push(x);
// }
// int pop(){//O(n)
//     if (s1.empty() and s2.empty())
// {
//     cout<<"Our queue is empty"<<endl;
//     return -1;
// }
// if (s2.empty())
// {
//     while (!s1.empty())
//     {
//         s2.push(s1.top());
//         s1.pop();
//     }
// }
//  int topval=s2.top();
//     s2.pop();
//     return topval;
// }
// bool empty(){
//     if (s1.empty() and s2.empty())
//     {
//         return true;
//     }
//     return false;
// }

// };
// int main(){
//     queues q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     for (int i = 0; i < 7; i++)
//     {
//         cout<<q.pop()<<endl;
//     }
//     cout<<q.empty();

    

//     return 0;
// }


//using function call stack
class queues{
stack<int> s1;
public:
void push(int x){
s1.push(x);
}
int pop(){//O(n)
    if (s1.empty())
{
    cout<<"Our queue is empty"<<endl;
    return -1;
}
int x=s1.top();
s1.pop();
if (s1.empty())
{
    return x;
}
int item=pop();
s1.push(x);
return item;
}
bool empty(){
    if (s1.empty() )
    {
        return true;
    }
    return false;
}

};
int main(){
    queues q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    for (int i = 0; i < 7; i++)
    {
        cout<<q.pop()<<endl;
    }
    cout<<q.empty();

    

    return 0;
}