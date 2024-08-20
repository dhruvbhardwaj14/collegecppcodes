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
        int n;
        cin >> n;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            vector<int> temp;
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            v.push_back(temp);
            temp.clear();
        }
        set<int> s;
        int count=0;
        bool flag=false;
        for (int i=0;i < v.size();i++)
        {
            
            for (int j = i; j < v.size(); j++)
            {
                for (int k = 0; k < v[i].size(); k++)
                {
                    s.insert(v[i][k]);
                }
                for (int k = 0; k < v[j].size(); k++)
                {
                    s.insert(v[j][k]);
                }
                if (s.size()==5)
                {
                    flag=true;
                    break;
                }
                else{
                    s.clear();
                }
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        

        
    }
    return 0;
}