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
        int n, x;
        cin >> n >> x;
        string albet = "abcdefghijklmnopqrstuvwxyz";
        string s = "";
        if (!(n >= (2 * x - 1)))
        {
            cout << -1 << endl;
        }
        else
        {
            if (n == 1)
            {
                int p=0;
                for (int i = 0; i < (n + 1) / 2; i++)
                {
                    if (p == x - 1)
                    {
                        s += albet[p];
                        p = 0;
                    }
                    else
                    {
                        s += albet[p];
                        p++;
                    }
                }
                cout << s << endl;
            }
            else
            {
                int p = x - 1;
                for (int i = 0; i < (n + 1) / 2; i++)
                {
                    if (p == 0)
                    {
                        s += albet[p];
                    }
                    else
                    {
                    s+= albet[p];
                    p--;
                    }
                    
                }
                // cout<<s<<"-";
                string f=s;
                reverse(s.begin(), s.end());
                string sub = s.substr(0, (n - s.length()));
                // cout<<sub<<"|||";
                sub += f;
                cout << sub << endl;
            }
        }
    }

        return 0;
    }