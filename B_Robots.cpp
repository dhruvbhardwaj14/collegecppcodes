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
        int m, n;
        cin >> n >> m;
        char a[n][m];
        int flag = 0;
        int minr = INT_MAX;
        int minc = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 'R')
                {
                    minr = min(minr, i);
                    minc = min(minc, j);
                }
            }
        }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (a[i][j]=='R' && i==minr && j==minc)
                    {
                        flag=1;
                    }
                }
            }
            if (flag==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        
    }
    return 0;
}