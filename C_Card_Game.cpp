#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
const int M = 998244353;
int factorial(int n)
{
    if (n < 0)
        return (-1); /*Wrong value*/
    if (n == 0)
        return (1); /*Terminating condition*/
    else
    {
        return (n%M * factorial(n - 1)%M)%M;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<factorial(n-1)<<endl;
    }
    return 0;
}