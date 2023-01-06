#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y>>z;

        int t = y/x;
        int res = z-t;
        if(res < 0) cout<<"0"<<"\n";
        else cout<<res<<"\n";
    }
    return 0;
}
    