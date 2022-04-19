#include<iostream>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int basicpay;
    float hra,da,ta,tax;
    cout<<"Enter basic pay:";
    cin>>basicpay;
    cout<<"Enter HRA (%):";
    cin>>hra;
    cout<<"Enter DA (%):";
    cin>>da;
    cout<<"Enter TA (%):";
    cin>>ta;
    cout<<"Enter TAX (%):";
    cin>>tax;
    hra=((float)(hra/100))*basicpay;
    da=((float)(da/100))*basicpay;
    ta=((float)(ta/100))*basicpay;
    tax=((float)(tax/100))*basicpay;
    cout << left << setw(40) << setfill('-')<<""<<endl;
    cout<<left<<setw(55)<<setfill(' ')<<"            PAYMENT SLIP        "<<endl;
    cout << left << setw(40) << setfill('-')<<""<<endl;
    cout << left << setw(25)<<setfill(' ') << " BASICPAY";
    cout << right << setw(9)<<basicpay<< endl;
    cout << left << setw(25)<<setfill(' ') << " HRA";
    cout <<"+"<< right << setw(9)<<float(hra)<< endl;
    cout << left << setw(25)<<setfill(' ') << " DA";
    cout<<"+";
    cout << right << setw(9)<<float(da)<< endl;
    cout << left << setw(25)<<setfill(' ') << " TA";
    cout<<"+";
    cout << right << setw(9)<<float(ta)<< endl;
    cout << left << setw(40) << setfill('-')<<endl;
    cout << left << setw(25)<<setfill(' ') << " GROSS SALARY";
    cout << right << setw(9)<<float(basicpay + ta + da + hra)<< endl;
cout << left << setw(25) <<setfill(' ')<<" TAX DEDUCTIONS";
cout<<"-";
cout << right <<setw(9)<<float(tax)<<endl;
cout << left << setw(40) << setfill('-')<<""<<endl;
cout << left <<setw(25)<<setfill(' ')<<" NET SALARY";
cout << right << setw(9)<< float(basicpay + ta + da + hra - tax) << endl;
cout << endl;
return 0;

}