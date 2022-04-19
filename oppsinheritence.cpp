#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// private members are never inherited
// class A{
//     public:
//     void Afunc(){
//         cout<<"funca"<<endl;
//     }
// };
// class B{
//     public:
//     void Bfunc(){
//         cout<<"funcb"<<endl;
//     }
// };
// class C : public A, private B{//multiple inheritence of c
// // Note only public and protected parts are inherited to public of class c of class a and class b
//     public:
// };
// class D : public C {
//     public:
// };
// int main(){
//     C c;// declaration of a object of class C 
//     c.Afunc();
//     c.Bfunc();
//     D d;// declaration of a object of class C 
//     d.Afunc();
//     d.Bfunc();

// return 0;
// }

// //polymorphism
// // poly=many
// // morphism=forms
// // Two types of polymorphism 
// // 1.compile time
// // a)function overloading-diff func same name but diff no./type of arguements
// // b) operator overloading-same operator symbol but now works differently for a function
// // 2. Run time
// // a)virtual functions-same functions in base as well as derived classes then virtual keyword is used in the base class function so that it doesn't call in the derived class

// //operator overloading example
// // class Complex{
// // private:
// // int real,imag;
// // public:
// // Complex(){}
// // Complex(int r,int i){
// //     real=r;
// //     imag=i;
// // }
// // Complex operator + (Complex const &obj){//operator overloading format
// //     Complex res;
// //     res.imag=imag+obj.imag;
// //     res.real=real+obj.real;
// //     return res;
// // }
// // void display(){
// //     cout<<real<<"+i"<<imag<<endl;
// // }
// // };

// // int main(){
// //     Complex c1(2,13),c2(6,7),c3;
// //     c3=c1+c2;
// //     c3.display(); 
// //     return 0;
// // }

// // Virtual function 
// class base{
// public:
// virtual void print(){cout<<"This is the base class's func"<<endl;}
// virtual void display(){cout<<"This is base display func"<<endl;}
// };
// class derived : public base{
// public:
// void print(){cout<<"This is the derived class's func"<<endl;}
// void display(){cout<<"This is derived display func"<<endl;}
// };
// int main(){base *baseptr;
// derived d;
// baseptr=&d;
// // baseptr ->print();//NOTE:- (->)is used to call functions by a pointer in classes
// // baseptr ->display();//NOTE:- (->)is used to call functions by a pointer in classes
// // NOTE:- HERE THE OUTPUT WHICH CAME ARE:-
// // This is the base class's func
// // This is base display func
// // now after adding virtual to the base class func
// baseptr ->print();
// baseptr ->display();
// NOTE:- HERE THE OUTPUT WHICH CAME ARE:-
// This is the derived class's func
// This is derived display func
    // return 0;}
// class Complex
// {
//     double real;
//     double imag;
// public:
// Complex(){}

//     Complex(int a, int b)
//     {
//         real=a;
//         imag=b;
//     }
//     void display(){
//         cout<<real<<"+"<<imag<<"i"<<endl;
//     }

// friend Complex operator+(Complex C1, Complex C2) ;

// };
// //Then we write the non member friend function operator+.
// Complex operator + (Complex C1, Complex C2) {
//      Complex temp;
//      temp.real = C1.real + C2.real;
//      temp.imag = C1.imag + C2.imag;
//      return temp;
// }

// int main()
// {
//     Complex C1(3,4),C2(5,6);
//     Complex C3=C1+C2;
//     C3.display();
//     return 0;
// }