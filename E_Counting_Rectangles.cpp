#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n,q;
cin>>n>>q;
vector<pair<long long int,long long int>> v;
for (int i = 0; i < n; i++)
{
    int hi,wi;
    cin>>hi>>wi;
    v.push_back(make_pair(hi,wi));
}
vector<vector<long long int>> h;
for (int i = 0; i < q; i++)
{
    int hb,wb,hs,ws;
    cin>>hs>>ws>>hb>>wb;
    vector<long long int> temp;
    temp.push_back(hs);
    temp.push_back(ws);
    temp.push_back(hb);
    temp.push_back(wb);
    h.push_back(temp);
}
// for (auto it : v)
// {
//     cout<<it.first<<" ";
//     cout<<it.second<<endl;
// }
// for (auto it : h)
// {
//     for (auto p : it)
//     {
//         cout<<p<<" ";
//     }
//     cout<<endl;
// }

}
return 0;
}