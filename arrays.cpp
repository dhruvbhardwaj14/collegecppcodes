#include<iostream>
#include<cmath>
#include "bits/stdc++.h"
using namespace std;
int main(){
// int n;
//  cin>>n;
//  int array[n];
//  for (int i = 0; i < n; i++)
//  {
//      cin>>array[i];
//  }
//  for (int i = 0; i < n; i++)
//  {
//      cout<<array[i];
//  }


// searching in arrays

int n;
cin>>n;
bool flag=0;
int arr[4]={10,20,30,40};
// datatype array[size]={datatype value1,datatype value2,datatype value3,datatype value4}
for (int i = 0; i < 4; i++)
{
    if (arr[i]==n)
    {
        flag=1;
      cout<<i<<endl;
      break;
    }
}
if (flag==0)
{
cout<<-1<<endl;
}
// int shruti[4]={1,2,3,4};

// if in any array the user wants the add an element to
//  an index number greater than the specified range then 
//  it will show an error

//  if in any array the user prints an element greater than
//  the index number of array size then it will show random 
//  numbers but not errors 

// for (int i = 0; i < 11; i++)
// {
//   cout<<shruti[i]<<endl;
// }

// char array[6]={}
// NOTE:-Character array main hamesha end main 
// ek null character hota h compulsory jiski vajah se
// uska size +1 than original hota h!

// char array[5]={'a','b','c','d'};
// cout<<array<<endl;
// string m="asd";
// char a[]="arsd hsadbadas dsajhd";//iss initialization m char a[] is working as string
// cout<<a<<endl;
// cout<<m<<endl;

return 0;
}
// a[2][3]={{12,23,34},{69,69,69}}
//no.of curly braces=rows
//no.of elements in each curly brace=columns.