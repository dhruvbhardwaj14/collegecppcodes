#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;//alphabets of NUll is caps
    }
};
void insertatHead(node* &head,int val){
    node* newnode=new node(val);
    if (head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
        return;
    }
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
    head=newnode;
}
void insertatTail(node* &head,int val){
    
    node* newnode=new node(val);
    if (head==NULL)
    {
        insertatHead(head,val);
        return;
    }
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while (temp!=head);
    cout<<"NULL"<<endl;
    
}
void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;

}
void deleteion(node* &head,int pos){
    if (pos==1)
    {
        deleteathead(head);
        return;
    }
    
    node* temp=head;
    int count=1;
    while (count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next; 
     delete todelete;

}
int main(){
node* head=NULL;
insertatTail(head,1);
insertatTail(head,2);
insertatTail(head,3);
insertatTail(head,4);
insertatTail(head,5);
insertatTail(head,6);
// insertatHead(head,1);
display(head);
// deleteion(head,5);
// deleteion(head,1);
display(head);

return 0;
}