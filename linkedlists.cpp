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
void insertatTail(node* &head,int val){
    
    node* newnode=new node(val);
    if (head==NULL)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertatHead(node* &head,int val){
    node* newnode=new node(val);
    node* temp=head;
    newnode->next=temp;
    head=newnode;
}
void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int key){
    node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//deletion in a linked list
void deleteitem(node* &head,int val){
    if (head==NULL)
    {
        cout<<"Empty list"<<endl;
        return;
    }
    if(head->data==val || head->next==NULL)
    {
        node* delete1=head;
        head=head->next;
        delete delete1;
        return;
        // head->next=
    }
    
    node* temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    
}

//reversing a linked list


//iterative way

// node* reverselist(node* &head){
//     node* curr=head;
//     node* prev=NULL;
//     node* nextptr;
//     while (curr!=NULL)
//     {
//         nextptr=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextptr;
//     } 
//     return prev;
// }

//recursive way

// node* reverserecursive(node* &head){
//     if (head==NULL || head->next==NULL)
//     {
//         return head;
//     }
    
//     node* newhead=reverserecursive(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }

// //q1 reverse k nodes in a linked list
// // reverse the first k nodes and after that do it for next k nodes 

// node* reversek(node* &head,int k){
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;
//     int count=0;
//     while (currptr!=NULL & count<k)
//     {
//         nextptr=currptr->next;
//         currptr->next=prevptr;
//         prevptr=currptr;
//         currptr=nextptr;
//         count++;
//     }
//     if (nextptr!=NULL)
//     {
//         head->next=reversek(nextptr,k);
//     }
//     return prevptr;
// }

//q2 detection of cycle
// void makecycle(node* &head,int pos){
//     node* temp=head;
//     node* startNode;
//     int count=1;
//     while(temp->next!=NULL){
//         if (count==pos)
//         {
//             startNode=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=startNode;
// }
// bool detectcycle(node* head){
//     node* slow=head;
//     node* fast=head;
//     while (fast!=NULL && fast->next!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//         if (fast==slow)
//         {
//             return true;
//         } 
//     }
//     return false;

// }

//q3 removal of cycle
// void removecycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     do
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     } while (fast!=slow);
//     fast=head;
//     while (slow->next!=fast->next)
//     {
//         slow=slow->next;
//         fast=fast->next;
//     }
//     slow->next=NULL;
// }

//q3 append last k nodes of a linked list to start
// int lengthlist(node* head){
//     int l=0;
//     node* temp=head;
//     while (temp!=NULL)
//     { l++;
//         temp=temp->next;
//     }
//     return l;
// }
// node* appendk(node* & head,int k){
//         node* newhead;
//         node* newtail;
//         node* tail=head;
//         int l=lengthlist(head);
//         k%=l;//if k out of range
//         int count=1;
//         while (tail->next!=NULL)
//         {
//             if (count==l-k)
//             {
//                 newtail=tail;
//             }
//             if (count==l-k+1)
//             {
//                 newhead=tail;
//             }
//             tail=tail->next;
//             count++;
//         }
//         newtail->next=NULL;
//         tail->next=head;
//         return newhead;
// }

//q4 intersection point of two linked lists-O(length of big linked list-n)
// int lengthlist(node* head){
//     node* temp=head;
//     int count=0;
//     while (temp!=NULL)
//     {
//         temp=temp->next;
//         count++;
//     }
//     return count;
// }

// int intersection(node* head1,node* head2){
//     node* ptr1;
//     node* ptr2;
//     int d=0;
//     if (lengthlist(head1)>lengthlist(head2))
//     {
//         d=lengthlist(head1)-lengthlist(head2);
//         ptr1=head1;
//         ptr2=head2; 
//     }
//     else{
//         d=lengthlist(head2)-lengthlist(head1);
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while (d)
//     {
//         ptr1=ptr1->next;
//         if (ptr1==NULL)
//         {
//             return -1;
//         }
//         d--;
//     }
//     while (ptr1!=NULL && ptr2!=NULL)
//     {
//         if (ptr1==ptr2)
//         {
//             return ptr1->data;
//         }
//         ptr1=ptr1->next;
//         ptr2=ptr2->next;
//     }
//     return -1;

// }

// //to intersect the linked lists
// void intersect(node *head1,node*head2,int pos){
//     node* temp1=head1;
//     pos--;
//     while (pos--) 
//     {
//         temp1=temp1->next;
//     }
//     node* temp2=head2;
//     while (temp2->next!=NULL)
//     {
//         temp2=temp2->next;
//     }
//     temp2->next=temp1;
// }

//q6 merge 2 sorted linked lists-O(m+n-m and n are legth of both linked lists)
//iterative way

// node* merge(node* &head1,node* &head2){
//     node* p1=head1;
//     node* p2=head2;
//     node* dummynode=new node(-1);
//     node* p3=dummynode;
//     while (p1!=NULL && p2!=NULL)
//     {
//         if (p1->data<p2->data)
//         {
//             p3->next=p1;
//             p1=p1->next;
//         }
//         else
//         {
//             p3->next=p2;
//             p2=p2->next;
//         }
//         p3=p3->next;
//     }
//     while (p1!=NULL)
//     {
//         p3->next=p1;
//         p1=p1->next;
//         p3=p3->next;
//     }
//     while (p2!=NULL)
//     {
//         p3->next=p2;
//         p2=p2->next;
//         p3=p3->next;
//     }
//     return dummynode->next;

// }

//recursive way merge
node* mergerecursive(node* &head1,node* &head2){
    if (head1==NULL)
    {
       return head2;
    }
    if (head2==NULL)
    {
       return head1;
    }
    
    node* result;
     if (head1->data<head2->data)
     {
        result=head1;
        result->next=mergerecursive(head1->next,head2);
     }
     else{
         result=head2;
        result->next=mergerecursive(head1,head2->next);
     }
     return result;
}
//q7 to swap even and odd elements 
void evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while (odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if (odd->next==NULL)
    {
        even->next=NULL;
    }
}
int main(){
    // node* head=NULL;
    // insertatTail(head,1);
    // insertatTail(head,2);
    // insertatTail(head,3);
    // insertatHead(head,4);
    // insertatHead(head,5);
    // insertatHead(head,6);
    // insertatTail(head,6);
    // insertatTail(head,7);
    // deleteitem(head,4);
    // display(head);
    // cout<<search(head,7)<<endl;
    // cout<<search(head,8)<<endl;

    
    // reverselist(head);
    // display(head);


    // int k;
    // cin>>k;
    // node* newhead=reversek(head,k);
    // display(newhead);


    //append k nodes of a linked list
    //  node* head=NULL;
    // insertatTail(head,2);
    // insertatTail(head,3);
    // insertatTail(head,4);
    // insertatHead(head,1);
    // insertatTail(head,5);
    // insertatTail(head,6);
    // display(head);
    // node* newhead=appendk(head,3);
    // display(newhead);

    //intersection of two linked lists
    // node* head1=NULL;
    // node* head2=NULL;
    // insertatTail(head1,2);
    // insertatTail(head1,3);
    // insertatTail(head1,4);
    // insertatHead(head1,1);
    // insertatTail(head1,5);
    // insertatTail(head1,6);
    // insertatTail(head2,9);
    // insertatTail(head2,10);
    // intersect(head1,head2,3);
    // display(head1);
    // display(head2);
    // cout<<intersection(head1,head2)<<endl;

    //merge 2 sorted linked lists
    // node* head1=NULL;
    // node* head2=NULL;
    // int arr1[]={1,4,5,7};
    // int arr2[]={2,3,6};
    // for (int i = 0; i < 4; i++)
    // {
    //     insertatTail(head1,arr1[i]);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     insertatTail(head2,arr2[i]);
    // }
    // display(head1);
    // display(head2);
    // // node* newhead=merge(head1,head2);
    // node* newhead=mergerecursive(head1,head2);
    // display(newhead);

    //place evena after odd elements
    node* head=NULL;
insertatTail(head,1);
insertatTail(head,2);
insertatTail(head,3);
insertatTail(head,4);
insertatTail(head,5);
insertatTail(head,6);
insertatTail(head,7);
display(head);
evenafterodd(head);
display(head);


    //cycle-linked list 
    // node* head=NULL;   
    // insertatTail(head,1);
    // insertatTail(head,2);
    // insertatTail(head,3);
    // insertatTail(head,4);
    // insertatTail(head,5);
    // insertatTail(head,6);
    // display(head);
    // makecycle(head,3);
    // cout<<detectcycle(head)<<endl;
    // removecycle(head);
    // cout<<detectcycle(head)<<endl;
    // display(head);



    
    
return 0;
}


//DOUBLY LINKED LIST--every node has a next and prev pointer 
// class nodedub{
//     public:
//     int data;
//     nodedub* next;
//     nodedub* prev;
//     nodedub(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// void insertatHead(nodedub* &head,int val){
//     nodedub* newnode=new nodedub(val);
//     newnode->next=head;
//     if (head!=NULL)
//     {
//         head->prev=newnode;
//     }
//     head=newnode;
// }
// void insertatTail(nodedub* &head,int val){
//     if (head==NULL)
//     {
//         insertatHead(head,val);
//         return; 
//     }
    
//     nodedub* newnode=new nodedub(val);
//     nodedub* temp=head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=newnode;
//     newnode->prev=temp;
// }
// void display(nodedub* head){
//     nodedub* temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// //deletion
// void deleteitem(nodedub* &head,int val){
//     // if (head==NULL)
//     // {
//     //     cout<<"Empty list"<<endl;
//     //     return;
//     // }
//     if(head->data==val)
//     {
//         nodedub* delete1=head;
//         head=head->next;
//         head->prev=NULL;
//         delete delete1;
//         return;
        
//     }
    
//     nodedub* temp=head;
//     while (temp->data!=val)
//     {
//         temp=temp->next;
//     }
//     nodedub* todelete=temp;
//     if (temp->next!=NULL)
//     {
//     temp->next->prev=temp->prev;
//     }
//     temp->prev->next=temp->next;
//     delete todelete;
    
// }
// int main(){
//     nodedub* head=NULL;
//     insertatTail(head,2);
//     insertatTail(head,3);
//     insertatTail(head,4);
//     insertatHead(head,1);
//     insertatTail(head,5);
//     insertatTail(head,6);
//     display(head);
//     deleteitem(head,4);
//     display(head);
//     // cout<<search(head,7)<<endl;
//     // cout<<search(head,8)<<endl;
//     return 0;
// }