#include<iostream>
#include<cmath>
#include"bits/stdc++.h" 
 
using namespace std;
// divisible by 5 or 7 
// int divisble(int n, int a, int b){
//     int c1=n/a;
//     int c2=n/b;
//     int c3=n/(a*b);
//     return (c1+c2-c3);
// }
// int main(){
//     int n,a,b;
//     cin>>n>>a>>b;
//     cout<<divisble(n,a,b)<<endl;

// return 0;
// }

// euclid gcd algorithm
int main(){
    int a,b;
    cin>>a>>b;
    int max1=max(a,b);
    int min1=min(a,b);
    int temp=1;
    while (temp!=0)
    {
        temp=max1%min1;
        max1=max(temp,min1);
        min1=temp;
        cout<<temp<<"--"<<max1<<"--"<<min1<<endl;

    }
    cout<<max1<<endl;
}
