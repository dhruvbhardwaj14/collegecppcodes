#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;
}
vector<int> rearrangeBarcodes(vector<int>& barcodes) {
    sort(barcodes.begin(),barcodes.end());
    vector<int> ans;
    //finding a element with maximum frquency;
        multiset<int> ms;
        map<int,int> mp;
        for (auto it : barcodes)
        {
            ms.insert(it);
        }
        for (auto it : barcodes)
        {
            mp[it]=ms.count(it);
        }
        auto max=*max_element(mp.begin(),mp.end(),comp);
        // cout<<max.first;
    //make an array and push max element at alternate pos.
    int a[barcodes.size()];
    for (int i = 0; i < barcodes.size(); i+=2)
    {
        a[i]=max.first;   
    }
    int t=0;
    int i=1;

    //making the ordered barcode sequence
    while (t!=barcodes.size())
    {
        if (barcodes[t]==max.first)
        {
            t++;
        }
        else{
            a[i]=barcodes[t];
            i+=2;
            t++;
        }
    }
    //push this array back to the vector
    for (int i = 0; i < barcodes.size(); i++)
    {
        ans.push_back(a[i]);
    }
    return ans;
    // for (int i = 0; i < barcodes.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    
    
    }
int main(){
    vector<int> p({2,2,2,2,2,1,1,1,1,1});
vector<int> temp=rearrangeBarcodes(p);
for (auto it : temp)
{
    cout<<it<<" ";
}

return 0;
}