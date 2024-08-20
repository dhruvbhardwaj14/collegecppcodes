// Karan Mashru
// 1 hour ago
// Code :
#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, c, k, f;
    string a, b;
    ll dec[26];
    bool v[26], v1[26];
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        cin>>a;
        b="";
        
        for(i=0; i<26; i++)
        {
            v[i]=false;
            v1[i]=false;
        }
        c=0;
        for(i=0; i<n; i++)
        {
           
            if(v[a[i]-97]==true){
                b+=char(dec[a[i]-97]+97);
            }else{
                c++;
                for(j=0; j<26; j++)
                {
                    if(char(j+97)!=a[i]){
                        if(v1[a[i]-97]==true){
                            if(v1[j]==false){
                                if(v[j]==true){
                                    f=0;
                                    k=j;
                                    
                                    while(v[k]==true){
                                        k=dec[k];
                                    }
                                    
                                    if(k!=(a[i]-97)){
                                    dec[a[i]-97]=j;
                                    v1[j]=true;
                                    v[a[i]-97]=true;
                                    break;
                                    }else if(c==26){
                                        dec[a[i]-97]=j;
                                    v1[j]=true;
                                    v[a[i]-97]=true;
                                    break;
                                    }
                                }else if(v[j]==false){
                                    dec[a[i]-97]=j;
                                    v1[j]=true;
                                    v[a[i]-97]=true;
                                    
                                    break;
                                }
                            }
                        }else{
                            if(v1[j]==false){
                                if(v[j]==true){
                                    dec[a[i]-97]=j;
                                    v1[j]=true;
                                    v[a[i]-97]=true;
                                    
                                    break;
                                }else{
                                    dec[a[i]-97]=j;
                                    v1[j]=true;
                                    v[a[i]-97]=true;
                                    
                                    break;
                                }
                            }
                        }
                    }
                }
                
                b+=char(dec[a[i]-97]+97);
            }
        }
        
        
        cout<<b<<"\n";
    }
    
    
    
}