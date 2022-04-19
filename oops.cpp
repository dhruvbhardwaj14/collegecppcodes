#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// syntax class
    // class <classname>{
        // NOTE:- by default a class is private
    //     string name;__>data members
    //     int age;____>data members
    //     bool gender;___>data members
    // };<-----semicolon is used
class student{
    // public: 
    //---> to make the class public from private so that
    // each variable is accessbile outside the class 
        string name;
        int age;
        char gender;
// to print a class by creating  a function
public:

//CONSTRUCTOR
// in sql
// insert into tablename values
// ('name',age,gender) now if we want to enter the data the same 
// way in classes for example- student a("name",age,'Gender')
//will create an object itself for student and give these values
// syntax of constructor :
// classname(first entry-(name here),second entry-......soo on){
// main code to write the entries 
// }
student(){
    cout<<"Default constructor"<<endl;
}
student(string n,int a,char g){
    cout<<"Parameterised constructor"<<endl;
    name=n;
    age=a;
    gender=g;
}
student(student &a){
    cout<<"Copy constructor"<<endl;
    name=a.name;
    gender=a.gender;
    age=a.age;
}
void printclass(){
    cout<<"NAME-";
    cout<<name<<endl;
    cout<<"Age-";
    cout<<age<<endl;
    cout<<"Gender-";
    cout<<gender<<endl;
    }

// DESTRUCTOR-ALWAYS AUTOMATICALLY CALLED AFTER MAIN
~student(){
    cout<<"Destructor called"<<endl;
}
// operator 
bool operator  ==(student &a){
    if (name==a.name && age==a.age && gender==a.gender)
    {
           return true;
    }
    else{
        return false;
    }
}
// to access class variables without using 
// public function outside the class

// void setthevalues(string s,int a,char g){
//      name=s;
//      age=a;
//      gender=g;
// }

    

};


int main(){
    // student a;
    // a.name="Dhruv";
    // a.age=18;
    // a.gender='M';

    // to input data through user by using an array
    // int n;
    // cin>>n;
    // student a[n];
    // string s;
    // int age;
    // char gender;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Name-";
    //     cin>>a[i].name;// name is the name used in class
    //     cout<<"Age-";
    //     cin>>a[i].age;//age is the age used in the class
    //     cout<<"Gender-";
    //     cin>>a[i].gender;// gender is the gender used in the class
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Name-";
    //     cin>>s;
    //     cout<<"Age-";
    //     cin>>age;
    //     cout<<"Gender-";
    //     cin>>gender;
    //     a[i].setthevalues(s,age,gender);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     a[i].printclass();//to print each data
    // }

    // use of CONSTRUCTOR 
    string name;
    int age;
    char gender;
    cin>>name>>age>>gender;
    // parameterised;
    student nainaaaa(name,age,gender);
    nainaaaa.printclass();
    // default;
    student b;
    // b.printclass();
    //copy;
    student c=nainaaaa;//to copy values to c
// c.printclass();


//use of operator
if (c==nainaaaa)
{
    cout<<"SAME"<<endl;
}
else{
    cout<<"NOT SAME"<<endl;
}
if (b==nainaaaa)
{
    cout<<"SAME"<<endl;
}
else{
    cout<<"NOT SAME"<<endl;
}
return 0;
}


// C- object of class complex which has both real and imaginary values {
//     double Real
//     double imaginary
// }
// c1.add_complex(c2)
// complex c1,c2,c3;
// c1-Real= ,imaginary=
// c2-Real= ,imaginary=
// c3-Real= ,imaginary=
// c1.Real=2,c1.imaginary=5----->2+5i
// functset(2,5){
//     Real=2;
//     imaginary=5;
// }
// funcadd(c1,c2){
//     Real=c1.real+c2.real;
//     imaginary=c1.imaginary+c2.imaginary;
// }
// add(){
//     complex c4;
//     c4.Real=Real(2)+c2.real(3);
//     c4.imaginary=imaginary(5)+c2.imaginary(6);
//     return c4;
// }
// c1.setvalue(2,5)
// c2.setvalue(3,6)
// c3=c1+c2-->5+11i 
// c3.Real=c1.Real+c2.Real
// c3.imaginary=c1.imaginary+c2.imaginary
// c3.funcadd(c1,c2);
// c3=c1+c2
// c3=c1.add(c2)--->c4;real(5),imaginary(11)