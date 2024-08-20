#include <iostream>
#include <cmath>
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int maxsum=0;
        vector<int> a(n);
        vector<int> sum1;
        vector<vector<int> > v;
        
        int sum;
        int count;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
            maxsum+=a[i];
        }
        // cout << "Case #" << i + 1 << ":";
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                sum=0;
                count=0;
                vector<int> temp;
                for (int k = i; k <= j; k++)
                {
                    sum+=a[k];
                    // cout << a[k] << "-";
                    temp.push_back(a[k]);
                    count++;
                }
                sum1.push_back(sum);
                v.push_back(temp);
                // cout<<sum<<"prevsum"<<prevsum<<" count-"<<count<<"!";
                // cout << endl;
            }
        }
        int alan;
        int barabar;
        bool flag=0;
        int indxi;
        int indxj;
        for (int i = 0; i < sum1.size(); i++)
        {
            cout<<sum1[i]<<"-";
        }
        cout<<endl;
        for (int i = 0; i < sum1.size(); i++)
        {
             alan=sum1[i];
            for (int j = 0; j < sum1.size(); j++)
            {
                 barabar=sum1[j]-alan;
                 if (alan/x==barabar/y)
                 {
                     flag=1;
                     indxi=i;
                     indxj=j;
                     cout<<"ALAN"<<alan<<" BArabar"<<barabar<<endl;
                     break;
                 }
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0;j <v[i].size();j++)
            {
                alan=v[i][j];
               for (int k = 0; k <v[i].size(); k++)
               {
                   
               }
               
               
            }
            cout<<endl;
        }
    }
            return 0;
}