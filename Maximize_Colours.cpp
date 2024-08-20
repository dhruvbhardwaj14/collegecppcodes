#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
vector<int> v;
for (int i = 0; i < 3; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
if (v[0]>=3 && v[1]>=3 && v[2]>=3)
{
    cout<<6<<endl;
}
///if not any zero
else if (v[0]!=0 && v[1]!=0 && v[2]!=0)
{
    int count=0;
       for (int i = 0; i < 3; i++)
       {
            if (v[i]==1)
            {
                count++;
            }
       }
       if(count==3 || count==2){
           cout<<3<<endl;
       }
       else{
           if (count==1)
           {
               cout<<4<<endl;
           }
           else{
               int count2=0;
               for (int i = 0; i < 3; i++)
               {
                   if (v[i]==2)
                   {
                       count2++;
                   }
               }
               if (count2==3)
               {
                   cout<<4<<endl;
               }
               else if(count2==2){
                   cout<<5<<endl;
               }
               else if(count2==1){
                   cout<<5<<endl;
               }
               else{
                   cout<<6<<endl;
               }
               
           }
           
       }
}
//if any zero
else{
    int count=0;
    int count1=0;
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        if (v[i]==0)
        {
            count++;
        }
        else if(v[i]==1){
            count1++;
        }
        else{
            sum+=v[i];
        }
    }
    if (count==3 || count==2)
    {
        cout<<3-count<<endl;
    }
    else{
         if (count1==2 || count1==1)
        {
            cout<<2<<endl;
        }
        else{
        if (sum>3){
            cout<<3<<endl;
            }
        else{
            cout<<2<<endl;
            }
        }
        
    }
    
}


}
return 0;
}