#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
int n;
    cin >> n;
    int sum=0;
    int original=n;
    while (n > 0)
    {
        sum= sum+(pow((n%10),3));
        n=n/10;
    }
    if (sum==original)
    {
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"non armstrong"<<endl;
    }
    return 0;

return 0;
}