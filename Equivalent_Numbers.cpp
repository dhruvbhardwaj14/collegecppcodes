#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
vector<int> primeFactors(int n)
{
    vector<int> ans;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        ans.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            // cout << i << " ";
            ans.push_back(i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        // cout << n << " ";
        ans.push_back(n);
    return ans;
}
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
vector<int> ap=primeFactors(a);
vector<int> bp=primeFactors(b);
map<int,int> ma;
set<int> sa;
set<int> sb;
map<int,int> mb;
for (auto it : ap)
{
    ma[it]++;
    sa.insert(it);
}
for (auto it : bp)
{
    mb[it]++;
    sb.insert(it);
}
bool ans=false;
if (sa==sb)
{
    double ratio=(double)ma[ap[0]]/mb[bp[0]];
    for (auto it : ma)
    {
        if ((double)it.second/mb[it.first]==ratio)
        {
            ans=true;
        }
        else{
            ans=false;
            break;
        }
    }
}
if (ans)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


}
return 0;
}