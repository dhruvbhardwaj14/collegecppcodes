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
        long long int n, m;
        cin >> n >> m;
        vector<long long int> v;
        if (n == 1)
        {
            cout << "YES" << endl;
            cout << m << endl;
            continue;
        }
        if (m < n)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            if (n & 1)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    v.push_back(1);
                }
                v.push_back((m - n + 1));
                cout << "YES" << endl;
            }
            else
            {
                if (m & 1)
                {
                    cout << "NO" << endl;
                    continue;
                }
                else
                {
                    for (int i = 0; i < n - 2; i++)
                    {
                        v.push_back(1);
                    }
                    v.push_back((m - n + 2) / 2);
                    v.push_back((m - n + 2) / 2);
                    cout << "YES" << endl;
                }
            }
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}