#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int s[n];
        for(int i = 0; i<n; i++)
        {
            cin>>s[i];
        }

        swap(s[0],s[n-1]);

        int count = 1;

        for(int i = 0; i<n-1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                if(s[i]>s[j])
                {
                    count = 0;
                }
            }
        }

        if(count == 0)
        {
            cout<<"NO"<<"\n";
        }
        else if(count == 1)
        {
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
