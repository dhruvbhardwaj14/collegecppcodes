#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n, k, MOD = 1000000007;
    string s;
    cin>>n>>k>>s;
    int ans = 1;
    if (n == k) {
        cout<<2<<endl;
        break;
    }
    else if (k % 2) {
        for(int i=0;i<n;i++){
            ans=(2*ans)%MOD;
        }
    }
    else {
        for(int i=0;i<n-1;i++){
            ans=(2*ans)%MOD;
        }
    }
    cout<<ans%MOD<<endl;
}
return 0;
}

// #include <iostream>
// #include "bits/stdc++.h"

// using namespace std;

// void solve() {
//     int n, k, MOD = 1000000007;
//     string s;
//     cin>>n>>k>>s;
//     int ans = 1;
//     if (n == k) {
//         cout<<2<<endl;
//         return;
//     }
//     else if (k % 2) {
//         for(int i=0;i<n;i++){
//             ans=(2*ans)%MOD;
//         }
//     }
//     else {
//         for(int i=0;i<n-1;i++){
//             ans=(2*ans)%MOD;
//         }
//     }
//     cout<<ans%MOD<<endl;
// }


// int main() {
//     int n;
//     cin>>n;
//     while(n--) {
//         solve();
//     }
// 	// your code goes here
// 	return 0;
// }
