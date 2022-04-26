#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
/*Pair is used to store a pair of values*/
// int main(){
//     pair<int,char> p;
//     // p.first=1;//first element of pair
//     // p.second='a';//second element of pair

//  p=make_pair (1,'a');//to make a pair
// return 0;
// }

//q reduce an array to it's size-1;
bool mycompare(pair <int,int> p1 ,pair<int,int> p2){
    return p1.first < p2.first;
}
int main(){
    int arr[]={10,16,7,14,5,3,2,9};
    vector<pair<int,int> > v;
    for (int i = 0; i <(sizeof(arr)/sizeof((arr[0]))); i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),mycompare);
    for (int i = 0; i <v.size(); i++)
    {
    //    arr[v[i].second]//index of elements
       arr[v[i].second]=i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}