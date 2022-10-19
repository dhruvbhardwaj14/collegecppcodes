#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
}
vector<pair<int,int> >v;
for (int i = 0; i < n; i++)
{
    v.push_back(make_pair(arr[i],i));
}
sort(v.begin(),v.end());
// for (int i = 0; i < n; i++)
// {
//     cout<<v[i].first<<" "<<v[i].second;
//     cout<<endl;
// }
int b=count(arr,arr+n,1);
int c=count(arr,arr+n,2);
int d=count(arr,arr+n,3);
int teams_count=min(b,min(c,d));
cout<<teams_count<<endl;
int i=0;
int j=count(arr,arr+n,1);
int k=j+count(arr,arr+n,2);
while (teams_count>0)
{
    cout<<v[i].second+1<<" ";
    cout<<v[j].second+1<<" ";
    cout<<v[k].second+1<<" ";
    i++;j++;k++;
    cout<<endl;
    teams_count--;
}


return 0;
}