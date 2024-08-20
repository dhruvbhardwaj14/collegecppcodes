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
        int l, r;
        cin >> l >> r;

        if (l % 2 != 0)
        {
            if (r - l <4)
            {
                cout << -1 << endl;
            }else{
                for (int i = l + 1; i < l + 5; i++)
                {
                    cout << i << " ";
                }
            }
        }
        else
        {
            for (int i = l; i < l + 4; i++)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}