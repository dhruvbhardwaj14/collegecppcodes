#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int sum(int arr[], int n)
{
  int ans = 0;
 
  // Finding sum of the array.
  for (int i = 0; i < n; i++)
    ans += arr[i];
 
  return ans * pow(2, n - 1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int size=pow(2,n);
        int a[n],b[size];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (k==a[i])
            {
                cout<<"YES"<<endl;
            }
        }
        for (int i = 0; i < n; i++)
        {
             b[i]=sum(a,n);
             cout<<b[i]<<endl;
        }

        
    }
return 0;
}