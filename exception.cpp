#include<iostream>
#include<cmath>
using namespace std;
string convertdate(int date,int month,int year){
    string months[12]={"December","January","February","March","April","May","June","July","August","September","October","November"};
    string resultant=months[month%12]+" "+to_string(date)+", "+to_string(year);
    return resultant;
}
int main(){
    int date,month,year;
    cout<<"Enter month:";
    cin>>month;
    cout<<"Enter date:";
    cin>>date;
    cout<<"Enter year:";
    cin>>year;
try{
try{
    if (month>12)
    {
        throw month;
    } 
}
catch(int ex){
    cout<<"Not a valid month"<<endl;
    exit(0);
}
try{
      if((month==2 && date>29) || (month/2==0 && month!=8 && date>30)){
        throw date;
    }
}
catch(int ex){
    cout<<"Not a valid day"<<endl;
    exit(0);
}
try{
    if(month==2 && date==29 && year%4!=0){
        throw year;
    }
}
catch(int ex){
    cout<<"Not a leap year"<<endl;
    exit(0);
}
cout<<"Converted date:"<<convertdate(date,month,year)<<endl;
}
catch(int ex){};
return 0;
}