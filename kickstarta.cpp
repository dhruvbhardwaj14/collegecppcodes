#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        string p="#@*&";
        int countup=0;
        int countlow=0;
        int countdig=0;
        int countsym=0;
        for (int i = 0; i < n; i++)
        {
            if (isupper(s[i]))
            {
                countup++;
            }
            if (islower(s[i]))
            {
                countlow++;
            }
            if (isdigit(s[i]))
            {
                countdig++;
            }
            if (s[i]=='#' || s[i]=='@' || s[i]=='*' || s[i]=='&')
            {
                countsym++;
            }
        }
                if (countlow==0)
                {
                    s.append("a");
                    countlow++;
                }
                if (countup==0)
                {
                    s.append("A");
                    countup++;
                }
                if (countdig==0)
                {
                    s.append("1");
                    countdig++;
                }
                if (countsym==0)
                {
                    s.append("*");
                    countsym++;
                }
        n=s.length();
        if (n<7)
        {
            for (int i = n; i < 7; i++)
            {
                s.append("1");
            }
        }
        
        cout<<"Case #"<<i+1<<": "<<s<<endl;
    }
return 0;
}