#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if(n%2 || n<4) {
            cout<<-1<<endl;
            continue;
        }
        n/=2;
        long long int mini = (n+2)/3;
        long long int maxi = n/2;
        cout<< mini <<" "<<maxi<<endl;
        // if right is even then n/2 else n/2
    }
    return 0;
}
// 4x + 6y = n
// 2x + 3y = n/2 = right
// if( )
// 
// 12, 13 , 14
// n/3 , n/3 + 1, n/3 + 1
