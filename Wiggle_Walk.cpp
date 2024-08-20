#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
for (int i = 0; i < t; i++)
{
cout<<"Case #"<<i+1<<": ";
long long int n,r,c,sr,sc;
cin>>n>>r>>c>>sr>>sc;
char s[n];
for (int i = 0; i < n; i++)
{
    cin>>s[i];
}
map<pair<int,int>,bool> mp;
mp[make_pair(sr,sc)]=true;
for (int i = 0; i < n; i++)
{
    if (s[i]=='N')
    {
        sr--;
        if (mp[make_pair(sr,sc)])
        {
            while (mp[make_pair(sr,sc)]!=0 || sr<0)
            {
                sr--;
            }
        }
        mp[make_pair(sr,sc)]=true;
        
    }
    if (s[i]=='S')
    {
        sr++;
        if (mp[make_pair(sr,sc)])
        {
            while (mp[make_pair(sr,sc)]!=0 || sr>r)
            {
                sr++;
            }
        }
        mp[make_pair(sr,sc)]=true;
    }
    if (s[i]=='W')
    {
        sc--;
        if (mp[make_pair(sr,sc)])
        {
            while (mp[make_pair(sr,sc)]!=0 || sc<0)
            {
                sc--;
            }
        }
        mp[make_pair(sr,sc)]=true;
    }
    if (s[i]=='E')
    {
        sc++;
        if (mp[make_pair(sr,sc)])
        {
            while (mp[make_pair(sr,sc)]!=0 || sc>c)
            {
                sc++;
            }
        }
        mp[make_pair(sr,sc)]=true;
    }
}
cout<<sr<<" "<<sc<<endl;
}
return 0;
}