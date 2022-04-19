#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t; // 3 ---> 3
    while(t--)
    {
        int x,y;
       cin>>x>>y;
       string s;
        cin>>s;
        int n=s.length();
        int count_one=0;
        int ans= 0;
        for(int i=0;i<n;i++)
        {   
            if(s[i]=='1')
            {   
                int count_streak=0;
                int j=i;
                while(s[j]=='1')
                {
                    count_streak++;
                    j++;
                    count_one++;

                }
                ans=max(ans,count_streak);
                i=j;
            }
        }

        int salary = x*(count_one) + y*(ans);
        cout<<salary<<endl;
    }

    // 
    
   
    return 0;
}
//
