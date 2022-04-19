#include <iostream>
#include <cmath>
#include "bits/stdc++.h"

using namespace std;
int main()
{
    string a;
    string vowels = "AEIOUYaeiouy";
    cin >> a;
    string temp = " ";
    for (int i = 0; i < a.length(); i++)
    {   
        if (vowels.find(a[i]) == -1)
        {
            char ch=tolower(a[i]);
            temp += "." ;
            temp += ch;
        }
    }
    cout << temp << endl;
    return 0;
}