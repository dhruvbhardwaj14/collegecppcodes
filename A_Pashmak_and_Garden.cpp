#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// int measure_distance(int x1,int x2,int y1,int y2){
//     int absdist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
//     return (absdist>0?absdist:-absdist);
// }
int absolute(int x){
    return(x>0?x:-x);
}
int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;
    // int distance=measure_distance(x1,x2,y1,y2);
    //-1 case
    if (x1!=x2 && y1!=y2 && absolute(x1-x2)!=absolute(y1-y2))
    {
          cout<<-1;
    }
    // vertical
    else if (x2==x1)
    {
        x3=x1+absolute(y2-y1);
        y3=y1;
        x4=x2+absolute(y2-y1);
        y4=y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    }

    //lateral
    else if(y2==y1){
        y3=y1+absolute(x2-x1);
        x3=x1;
        y4=y2+absolute(x2-x1);
        x4=x2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    } 
    //diagonal
    else
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
return 0;
}