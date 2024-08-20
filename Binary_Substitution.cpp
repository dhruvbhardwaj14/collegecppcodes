// #include<iostream>
// #include<cmath>
// #include"bits/stdc++.h"
// using namespace std;
// int main(){
// int t;
// cin>>t;
// while(t--){
// int n;
// cin>>n;
// string s;
// cin>>s;
// string ans="";
// if (n==1)
// {
//     cout<<1<<" "<<0<<endl;
// }
// else{
//     int count0=count(s.begin(),s.end(),'0');
//     int count1=count(s.begin(),s.end(),'1');
//     int d=count1-count0;
//     if (d==0)
//     {
//         cout<<1<<" "<<1<<endl;
//         cout<<1<<" "<<s.length()<<" "<<0<<endl;
//     }else{
//         cout<<1<<" "<<abs(d)+1<<endl;
//         if (d>0)
//         {
//             int i=0;
//             while(d!=0){
//                 if (s.substr(i,2)=="01" || s.substr(i,2)=="10" )
//                 {
//                     ans+='0';
//                     d--;
//                 }
//                 else{
//                      ans+=s[i];
//                 }
//                 i++;
//                 if (i==s.length()-1)
//                 {
//                     i=0;
//                 }
                
                
//             }
            
//         }
        
//     }
    
//     }
// }
// return 0;
// }

#include "bits/stdc++.h"
using namespace std;

int main() {
    //logic- see the diff and make that number of either-01 or 10 to the bit whose number is less and print l and r for that and then completely remove the whole string in one go
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c[2] = {0, 0};
        for(int i = 0; i < s.size(); i++) c[s[i] - '0']++;
        if(c[0] && c[1]) {
            cout << "1 " << max(c[0], c[1]) - min(c[0], c[1]) + 1 << "\n";
            while(c[0] != c[1]) {
                string now = "";
                int flag = 1;
                for(int i = 0; i < s.size(); i++) {
                    if(s[i] != s[i + 1] && flag) {
                        flag = 0;
                        cout << i + 1 << " " << i + 2 << " ";
                        if(c[0] > c[1]) cout << "1\n", c[1]++, now += '1';
                        else cout << "0\n", c[0]++, now += '0';
                        i++;
                    } else now += s[i];
                }
                s = now;
            }
            cout << "1 " << s.size() << " 0\n";
        } else cout << s.size() << " 0\n";
    }
}