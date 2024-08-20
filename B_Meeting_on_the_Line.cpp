#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long int x[n];
for (long long int i = 0; i < n; i++)
{
    cin>>x[i];
}
long long int t[n];
for (long long int i = 0; i < n; i++)
{
    cin>>t[i];
}
vector<int> a;
    for(int i = 0; i < n; i++) {
        a.push_back(x[i] + t[i]);
        a.push_back(x[i] - t[i]);
    }
 
    int mn = a[0], mx = a[0];
    for(int val : a) {
        mn = min(mn, val);
        mx = max(mx, val);
    }
    int sum = mn + mx;
    cout << sum / 2;
    if(sum % 2 != 0)
        cout << ".5";
    cout << '\n';

}
return 0;
}