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
        long long int a[n];
        map<int, int> mp;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ok = true;
        for (auto it : mp)
        {
            int count = it.second;
            int elem = it.first;
            if (count % elem != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
