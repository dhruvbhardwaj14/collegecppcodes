#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// Employee-employeeid,employee name,department,supervisorName
class Employee{
    private://to keep data members private
    long bankAccountNumber;
    public:
    int id;
    string name;
    string department;
    string supervisorName;

    //constructor
    //1. default constructor
    //2.Parameter Constructor
    //3. Destructor
    Employee(){
        cout<<"Default Constructor called!"<<endl;
    }
    Employee(int emp_id, string emp_name, string emp_department,string emp_supervisorName,long bank_no){ 
        id=emp_id;
        name=emp_name;
        department=emp_department;
        supervisorName=emp_supervisorName;
        bankAccountNumber=bank_no;
        cout<<"Parameterised Constructor called! Employee"<<endl;
    }
    //function which calls private members
    long fetchBankAccountNumber(){
        return this->bankAccountNumber;
        //this is a predefined class keyword which is a pointer to the current class's object
    }
    //static members don't have a this pointer.because they do not require an object to call!
   static void wish(){
        cout<<"Hello Employee!"<<endl;
    }
    ~Employee(){
        cout<<"Destructor Called! Employee"<<endl;
    }
};
class Student{
    public:
    Student(){
         cout<<"Default Constructor called!Student"<<endl;
    }
    ~Student(){
        cout<<"Destructor Called! Student"<<endl;
    }
};

int main(){
return 0;
}