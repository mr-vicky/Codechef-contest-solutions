#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;


        if(n%4 == 0)
        {
            if(k == 0)  cout<<"Off";
            else if(k == 1) cout<<"On";
        }
        else if(n%4 != 0)
        {
            if(k == 0)  cout<<"On";
            else if(k == 1) cout<<"Ambiguous";

        }
        cout<<"\n";
    }
    return 0;
}
