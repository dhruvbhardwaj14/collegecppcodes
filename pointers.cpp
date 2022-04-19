#include<iostream>
#include<cmath>
#include"bits/stdc++.h" 
 
using namespace std;
int main(){
// int a=10;
// int c=a+2;
// string b="sdasadasd";
// int *aptr;//pointer=adress code
// aptr=&a;//pointer=adress code
// string *bptr=&b;//&&-logical-&
// cout<<aptr<<endl;
// cout<<*aptr<<endl; 
// int *b=&(c);

// array in pointers 
int a[4]={10,20,30,40};
int *ptr=a+1;
// cout<<*(ptr)<<endl;
cout<<*a<<endl;
// cout<<*(a+1)<<endl;
// cout<<*(a+2)<<endl;
cout<<(a+3)<<endl;
cout<<(a+2)<<endl;
// cout<<*(a+3)<<endl;//0x16f6afb90+4*2
for (int i = 0; i < 4; i++)
{
    // cout<<*(a+i)<<endl;  
}
// // pointer to pointer 
// int a=10;
// int *p=&a;
// cout<<*p<<endl;
// cout<<p<<endl;
// int **q=&p;
// cout<<**q<<endl;
// cout<<*q<<endl;


// return 0;
// }
// passing pointers to a function 
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int minxy(int a,int b){
//     int min1=min(a,b);
//     return min1;
// }
// int maxxy(int a,int b){
//     int max1=max(a,b);
//     return max1;
// }
// int select(int (*ptrf)(int,int),int a,int b){
//     int val=ptrf(a,b);
//     return val;
// }
// int main(){
//     int a=2;
//     int b=4;
//     int min2=select(minxy,a,b);
//     int max2=select(maxxy,a,b);
//     // int min3=select(*pn,a,b);
//     cout<<min2<<max2<<endl;
//     // int *aptr=&a;
//     // int *bptr=&b;
//     // swap(aptr,bptr);
//     // swap(&a,&b);
//     // cout<<a<<b<<endl;
    return 0;
}

