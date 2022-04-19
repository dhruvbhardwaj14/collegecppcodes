#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t; // 3 ---> 3
    while(t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        // int positive_marks= (x*3);
        // int negative_marks = (x-n);
        // int sum = positive_marks + negative_marks;
        // if(sum>=p) 
        // {
        //     cout<<"PASS"<<endl;
        // }
        // else 
        // {
        //     cout<<"FAIL"<<endl;
        // }
        if((4*x-n)>=p) cout<<"PASS"<<endl;
        else cout<<"FAIL"<<endl;
        
    }
    
   
    return 0;
}
//
