#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int count_even=0;
        int count_odd=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i]%2!=0)
            {
                count_odd++;
            }
            else if (a[i]%2==0)
            {
                count_even++;
            }
        }
        if (count_even==0)
        {
            cout<<0<<endl;
        }
        else if(count_odd==0){
           cout<<n<<endl;
        }f
        else if(count_odd!=0 && count_even!=0){
            cout<<count_even<<endl;
        }
       
        
    }
      
return 0;
}