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
        if(z >= 1 && z <= 10)
        {
            cout<<z<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
