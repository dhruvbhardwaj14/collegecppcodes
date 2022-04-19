#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
int func(int R){
    R=5+(R-2)*2;
    return R;
}
int main(){
   int t,r,c;
   cin>>t;
   for(int T=1;T<=t;T++){
       cout << "Case #" << T << ": "<< endl;
       cin>>r>>c;
       int a=func(r);
       int b=func(c);       
       for (int i = 0; i < a; i++)
       {
        for (int j = 0; j < b; j++)
        {
            if (i<2)
            {
                if (j<=1)
                {
                    cout<<".";
                }
            if(j%2==0 && i%2==0 && j>1){
                cout<<"+";
            }
            if(j%2!=0 && i%2==0 && j>1){
                cout<<"-";
            }
            if(j%2==0 && i%2!=0 && j>1){
                cout<<"|";
            }
            if(j%2!=0 && i%2!=0 && j>1){
                cout<<".";
            }
            }
            else{
                if(j%2==0 && i%2==0){
                cout<<"+";
            }
            if(j%2!=0 && i%2==0){
                cout<<"-";
            }
            if(j%2==0 && i%2!=0){
                cout<<"|";
            }
            if(j%2!=0 && i%2!=0){
                cout<<".";
            }
            }
        }
        cout<<endl;  
       }

}
return 0;
}