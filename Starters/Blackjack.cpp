#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin>>x>>y;
        z = 21-(x+y);
        (z >= 1 && z <= 10)?cout<<"z\n":cout<<"-1\n";
    }
    return 0;
}
