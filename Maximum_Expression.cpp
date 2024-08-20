#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
bool comp(char a,char b){
    return a>b;
}
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
vector<char> s;
vector<char> ans;
vector<char> sign;
vector<char> res;
for (int i = 0; i < n; i++)
{
    char x;
    cin>>x;
    s.push_back(x);
    if (x=='+'||x=='-')
    {
        sign.push_back(x);
    }
    else{
        ans.push_back(x);
    }
}
sort(ans.begin(),ans.end(),comp);
sort(sign.begin(),sign.end());
int index=0;
for (int i = 0; i <(ans.size()-sign.size()) ; i++)
{
    res.push_back(ans[i]);
    index=i+1;
}

for (int i = 0; i <sign.size() ; i++)
{

    res.push_back(sign[i]);
    res.push_back(ans[index]);
    index++;
}
for (auto it : res)
{
    cout<<it;
}
cout<<endl;

}
return 0;
}