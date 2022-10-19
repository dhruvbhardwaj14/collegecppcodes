#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
//properties-
// 1.maximum nodes at a level L is=2^l
// 2.maximum nodes in a tree of height H=2^H-1
// 3. For N nodes,minimum possible height or minimum number of levels are log2(N+1)
// 4. A binary tree with N leaves has at least log2(N+1)+1 number of level

//basic structure of a binary tree
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// //preorder traversal
// void preorder(struct Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
    
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// //Inorder traversal
// void inorder(struct Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// //Postorder traversal
// void postorder(struct Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     struct Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
/* 
          1
        /  \  
      2     3
*/
// root->left->left=new Node(4);
// root->left->right=new Node(5);

/* 
          1
        /  \  
      2     3
    /  \
   4    5
*/
// root->right->left=new Node(6);
// root->right->right=new Node(7);

/* 
          1
        /  \  
      2     3
    /  \   / \
   4    5 6   7
*/


// preorder(root);
// cout<<endl;
// inorder(root);
// cout<<endl;
// postorder(root);
// return 0;
// }


//building tree using preorder and inorder traversal
// Algorithm
// 1. Pick element from preorder & create a node
// 2.Increment preorder idx
// 3. Search for picked element's pos in inorder
// 4. Call to build left subtree from inorder's O to pos-1
// 5. Call to build right subtree from inorder pos+1 to n
// 6. Return the node

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int inorder[],int start,int end,int curr){
//     for (int i = start; i <=end; i++)
//     {
//         if (inorder[i]==curr)
//         {
//             return i;
//         }    
//     }
//     return -1;
// }
// Node* buildtree(int preorder[],int inorder[],int start,int end){
//     if (start>end)
//     {
//         return NULL;
//     }
    
//     static int idx=0;
//     int curr=preorder[idx];
//     idx++;
//     Node* node=new Node(curr);
//     if (start==end)
//     {
//         return node;
//     }
    
//     int pos=search(inorder,start,end,curr);
//     node->left=buildtree(preorder,inorder,start,pos-1);
//     node->right=buildtree(preorder,inorder,pos+1,end);

//     return node;
// }
// void inorderprint(Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
    
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }
// int main(){
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};

//     //buildtree
//     Node* root=buildtree(preorder,inorder,0,4);//end=n-1
//     inorderprint(root);
//     return 0;
// }

//building tree using postorder and inorder traversal
// Algorithm
// 1. Start from the end of postorder & pick an element to create a
// node
// 2. Decrement postorder idx
// At
// 3. Search for picked element's pos in inorder
// 4. Call to build right subtree from inorder's pos+1 to n
// 5. Call to build left subtree from inorder 0 to pos-1
// 6. Return the node

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int inorder[],int start ,int end,int val)
// {
//     for (int i = start; i <=end; i++)
//     {
//        if (inorder[i]==val)
//        {
//            return i;
//        }
//     }
//     return -1;
// }
// Node* buildtree(int postorder[],int inorder[],int start,int end){
//     if (start>end)
//     {
//         return NULL;
//     }
    
//    static int idx=4;
//    int val=postorder[idx];
//    idx--;
//    Node* curr=new Node(val);
//    if (start==end)
//    {
//        return curr;
//    }
//    int pos=search(inorder,start,end,val);
//    curr->right=buildtree(postorder,inorder,pos+1,end);
//    curr->left=buildtree(postorder,inorder,start,pos-1);
   
//    return curr;
// }
// void inorderprint(Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
    
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }

// int main(){
//     int postorder[]={4,2,5,3,8};
//     int inorder[]={4,2,8,5,3};
//     Node* root=buildtree(postorder,inorder,0,4);
//     inorderprint(root);
//     return 0;
// }

//level order traversal
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void levelordertraversal(Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node* node=q.front();
//         q.pop();
//         if (node!=NULL)
//         {
//             cout<<node->data<<" ";
//             if (node->left)
//             {
//                 q.push(node->left);
//             }
//             if (node->right)
//             {
//                 q.push(node->right);
//             }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
    
// }

// //sum at kth level
// int sumatk(Node* root,int k){
//     if (root==NULL)
//     {
//         return -1;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     int level=0;
//     int sum=0;
//     while (!q.empty())
//     {
//         Node* node=q.front();
//         q.pop();
//         if (node!=NULL)
//         {
//             if(level==k){
//                 sum+=node->data;
//             }
//             if (node->left)
//             {
//                 q.push(node->left);
//             }
            
//             if (node->right)
//             {
//                 q.push(node->right);
//             }
//         }
//         else if (!q.empty()){
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }
// int main(){
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
    // levelordertraversal(root);
//     cout<<sumatk(root,2)<<endl;
//     return 0;
// }


//count all the nodes in a binary tree
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// int countnode(Node* root){
//     if (root==NULL)
//     {
//         return 0;
//     }
    
//     return(countnode(root->left)+countnode(root->right)+1);
// }

//sum all the nodes in a binary tree
// int sumnode(Node* root){
//     if (root==NULL)
//     {
//         return 0;
//     }
//     int leftsum=sumnode(root->left);
//     int rightsum=sumnode(root->right);
//     return (root->data+leftsum+rightsum);
// }

//height of a binary tree
// int height(Node* root){
//   if (root==NULL)
//   {
//     return 0;
//   }
  
//   int lh=height(root->left);
//   int rh=height(root->right);
//   return max(lh,rh)+1;
// }
//diameter of a binary tree-no. of nodes in longest path between any two leaves
// int diameter(Node* root){O(n)
//   if (root==NULL)
//   {
//     return 0;
//   }
  
//   int lh=height(root->left);
//   int rh=height(root->right);
//   int currdia=lh+rh+1;
  // int ldiameter=diameter(root->left);
  // int rdiameter=diameter(root->right);
//   return max(currdia,max(ldiameter,rdiameter));
// }

// int diameter(Node* root,int* height){//O(n)
//   if (root==NULL)
//   {
//     return 0;
//   }
  
//   int lh=0,rh=0;
//   int ldiameter=diameter(root->left,&lh);
//   int rdiameter=diameter(root->right,&rh);
//   int currdia=lh+rh+1;
//   *height=max(lh,rh)+1;
//   return max(currdia,max(ldiameter,rdiameter));
// }

//sum replacement of all nodes with the root data

// void sumreplace(Node* root){//O(n)
//   if (root==NULL)
//   {
//     return;
//   }
//   sumreplace(root->left);
//   sumreplace(root->right);
//   if (root->left!=NULL)
//   {
//     root->data+=root->left->data;
//   }
//   if (root->right!=NULL)
//   {
//     root->data+=root->right->data;
//   }
// }

// void levelordertraversal(Node* root){
//     if (root==NULL)
//     {
//         return;
//     }
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         Node* node=q.front();
//         q.pop();
//         if (node!=NULL)
//         {
//             cout<<node->data<<" ";
//             if (node->left)
//             {
//                 q.push(node->left);
//             }
//             if (node->right)
//             {
//                 q.push(node->right);
//             }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
    
// }


//check if tree is balanced or unbalanced
// bool isbalanced(Node* root){O(n^2)
//   if (root==NULL)
//   {
//     return true;
//   }
  
//   if (isbalanced(root->left)==false)
//   {
//     return false;
//   }
//   if (isbalanced(root->right)==false)
//   {
//     return false;
//   }
//   int lh=height(root->left);
//   int rh=height(root->right);
//   if (abs(lh-rh)<=1)
//   {
//     return true;
//   }
//   else{
//     return false;
//   }
// }
// bool isbalanced(Node* root,int* height){//O(n)
// if (root==NULL)
// {
//   return true;
// }

// int lh=0,rh=0;
// if (!isbalanced(root->left,&lh))
// {
//   return false;
// }
// if (!isbalanced(root->right,&lh))
// {
//   return false;
// }
// *height=max(lh,rh)+1;
// if (abs(lh-rh)<=1)
// {
//   return true;
// }
// else{
//   return false;
// }

// }

//right view of a binary tree
// void rightview(Node* root){// O(N)
//   if(root==NULL){
//     return;
//   }
//   queue<Node*> q;
//   q.push(root);
//   while(!q.empty()){
//     int n=q.size();
//     for (int i = 0; i < n; i++)
//     {
//       Node* curr=q.front();
//       q.pop();

//       if (i==n-1)
//       {
//         cout<<curr->data<<" ";
//       }
//       if (curr->left!=NULL)
//       {
//         q.push(curr->left);
//       }
//       if (curr->right!=NULL)
//       {
//         q.push(curr->right);
//       }
      
//     }
    
//   }
// }


//left view of a binary tree
// void leftview(Node* root){// O(N)
//   if(root==NULL){
//     return;
//   }
//   queue<Node*> q;
//   q.push(root);
//   while(!q.empty()){
//     int n=q.size();
//     for (int i = 0; i < n; i++)
//     {
//       Node* curr=q.front();
//       q.pop();

//       if (i==0)
//       {
//         cout<<curr->data<<" ";
//       }
//       if (curr->left!=NULL)
//       {
//         q.push(curr->left);
//       }
//       if (curr->right!=NULL)
//       {
//         q.push(curr->right);
//       }
      
//     }
    
//   }
// }

//shortest distance between any two nodes
Node* lca(Node* root,int n1,int n2){
  if(root==NULL){
    return NULL;
  }
  if (root->data==n1 || root->data==n2)
  {
    return root;
  }
  Node* left=lca(root->left,n1,n2);
  Node* right=lca(root->right,n1,n2);
  if (left!=NULL && right!=NULL)
  {
    return root;
  }
  if (left==NULL && right==NULL)
  {
    return NULL;
  }
  if (left!=NULL)
  {
    return lca(root->left,n1,n2);
  }
    return lca(root->right,n1,n2);
}
int findist(Node* root,int k,int dist){
  if (root==NULL)
  {
    return -1;
  }
  if (root->data==k)
  {
    return dist;
  }
  int left=findist(root->left,k,dist+1);
  if (left!=-1)
  {
    return left;
  }
  return findist(root->right,k,dist+1);
}
int distbtwnodes(Node* root,int n1,int n2){
  Node* Lca=lca(root,n1,n2);
  int d1=findist(Lca,n1,0);
  int d2=findist(Lca,n2,0);
  return d1+d2;
}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    // cout<<countnode(root)<<endl;
    // cout<<sumnode(root)<<endl;

    // cout<<height(root)<<endl;
    // int h=0;
    // if (isbalanced(root,&h)==true)
    // {
    //   cout<<"Balanced Tree"<<endl;
    // }
    // else{
    //   cout<<"Unbalanced Tree"<<endl;
    // }
    // int h1=0;
    // cout<<diameter(root,&h1)<<endl;


    // levelordertraversal(root);
    // sumreplace(root);
    // cout<<endl;
    // levelordertraversal(root);

    //right view
    // rightview(root);
    // leftview(root);    

    //distance between nodes
    cout<<distbtwnodes(root,4,7)<<endl;
    return 0;
}