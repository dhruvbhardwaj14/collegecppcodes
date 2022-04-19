#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;

// reverse a string using recursion

void reverse(string s){
    if (s.length()==0)
    {
        return;
    }
    string rest=s.substr(1);// 1 ke baad vaali string rest m aajaegi
    reverse(rest);// call first so this goes to end of word and print backward
    cout<<s[0];
}

// replace pi with 3.14 in string 
void pi(string s){
    if (s.length()==0) //base case
    {
        return;
    }
    if (s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        string rest=s.substr(2);
        pi(rest);
    }
    else{
        cout<<s[0];
        string rest1=s.substr(1);
        pi(rest1);
    }
    
    
}

//tower of hanoi problem 
// rules:
// only one can move at a time
// no small block can have larger one above 

void tower(int n, char src,char dest,char helper){
    if (n==0)
    {
        return;
    } 
    tower(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" To "<<dest<<endl; 
    tower(n-1,helper,dest,src);
}

//removing duplicates from a string 
string removedupli(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=removedupli(s.substr(1));
    if (ch==ans[0])
    {
        return ans;
    }
    else{
        return (ch+ans);
    }
}
// remove all x
string removex(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=removex(s.substr(1));
    if (ch=='x')
    {
        return (ans+ch);
    }
    else{
        return (ch+ans);
    }
}
int main(){
// reverse("dhruv");
// pi("piherepypi");
// tower(4,'A','B','C');
// cout<<removedupli("aab");
cout<<removex("pxapxxidhruv");
return 0;
}