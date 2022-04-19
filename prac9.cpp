#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
void odd(int n,int a[]){
 for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            cout<<a[i]<<" ";
        }
        
    }
    cout<<endl;
}
void even(int n,int a[]){
 for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            cout<<a[i]<<" ";
        }
        
    }
    cout<<endl;
}
void maxmin(int n,int a[]){
    int max1=INT_MIN;
    int min1=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        max1=max(max1,a[i]);
        min1=min(min1,a[i]);
    }
    cout<<max1<<"-"<<min1<<endl;;
}
void sumavg(int n,int a[]){
    int sum=0;
    float avg=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    avg=(float)(sum/n);
    cout<<sum<<"-"<<avg<<endl;
}
void removedupli(int n,int a[]){
    int b[n];
    int t=0;
    int max1=INT_MIN;
    sort(a,a+n);f
    for (int i = 0; i < n; i++)
    {
        if (max1!=a[i])
        {
        b[t]=a[i];
        max1=b[t];
        t++;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}
void reversing(int n, int a[]){
    int b[n];
    int t=0;
    for (int i =n-1; i>=0; i--)
    {
        b[t]=a[i];//3 2 4 3 2
        cout<<b[t];
        t++;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int choice=1;
    while (choice<=6 && choice>=1)
    {
     cout<<"MENU"<<endl;
    cout<<"1.Odd valued"<<endl;
    cout<<"2.Even valued"<<endl;
    cout<<"3.MAX and MIN"<<endl;
    cout<<"4.Sum and Avg"<<endl;
    cout<<"5.Remove dupli"<<endl;
    cout<<"6.Reverse"<<endl;
    
    cout<<"ENTER CHOICE-";
    cin>>choice;
    switch (choice)
    {
    case 1:
       odd(n,a);
        break;
    case 2:
       even(n,a);
        break;
    case 3:
       maxmin(n,a);
        break;
    case 4:
       sumavg(n,a);
        break;
    case 5:
       removedupli(n,a);
        break;
    case 6:
       reversing(n,a);
        break;
    default:
        break;
    }   
    }
    // reversing(n,a);
    // cout<<endl;
    // removedupli(n,a);
    // reversing(n,a);
return 0;
}