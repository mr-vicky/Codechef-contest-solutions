#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        if(x%3 == 0) cout<<"NORMAL\n";
        else if(x%3 == 1) cout<<"HUGE\n";
        else if(x%3 == 2) cout<<"SMALL\n";
    }
    return 0;
}
