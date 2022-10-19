 #include<iostream>
 #include<cmath>
 #include"bits/stdc++.h"
 using namespace std;
 int main(){
     string a;
     cin>>a;
    string p="WUB";
    string n="";
    int wubcount=0;
    for (int i = 0; i < a.length(); i++)
    {
            if (a.substr(i,3)==p)
            {
                if (wubcount==0)
                {
                    n+=" ";
                }
                i+=2;
                wubcount++;
            }
            else{
                wubcount=0;
                n+=a[i];
            }
    }
            cout<<n<<endl;
 return 0;
 }