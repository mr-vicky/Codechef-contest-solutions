#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        if(x%n == 0)
        {
            // if(n%x == 0)
                cout<<"YES";
        }
        else cout<<"NO";
    cout<<"\n";
    }
    return 0;
}
