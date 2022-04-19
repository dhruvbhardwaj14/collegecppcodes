#include <iostream>
using namespace std;
int main()
{
    //  do while loop
    // int n;
    // cin >> n;
    // do
    // {
    //     cout << n << endl;
    //     cin >> n;
    // } while (n > 0);

    for (int i = 1; i <=9; i++)
    {
        for (int j = 1; j <=10; j++)
        {
            cout<<i*j;
        }
        cout<<endl;
    }
    
    return 0;
}