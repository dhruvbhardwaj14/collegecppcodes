#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
/* vectors are dynamic arrays  size not specified
it requires a data file #include<vector>
it's syntax is vector<datatype> vector_name
to push elements in a vector we use vector_name.push_back(element)
to find length of vector use vector_name.size()
for having a vector pointer make an iterator of it by vector<int>::iterator i;
start of vector-vector_name.begin()||| end of vector-vector_name.end()
another way of traversing vector is for(auto element:v){cout<<element<<endl}
here auto will automatically take the vector datatype and element gets all it's elements 
to pop an element out of a vector use vector_name.pop_back()*/
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
//another way through iterator
    vector<int>::iterator it;
    for (it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";//vector pointer
    }
    cout<<endl;

    //most used auto way
    for (auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;

     v.pop_back();//pop last element

     vector <int> v2(3,50);//3 size vector with all element 50
     //50 50 50

     swap(v,v2);//swapping two vector elements
      for (auto element:v)
    {
        cout<<element<<" ";
    }
    cout<<endl;
      for (auto element:v2)
    {
        cout<<element<<" ";
    }
    cout<<endl;

    //several other functions can find on google
    

return 0;
}