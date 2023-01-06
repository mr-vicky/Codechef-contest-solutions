#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y;
        cin>>x>>y;
        abs(x);
        abs(y);
        int t = (y-x);
        cout<<abs(t)<<"\n";

    }
    return 0;
}
