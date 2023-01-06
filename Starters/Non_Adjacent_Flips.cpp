#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        for(int i = 0; i<n; i++)
        {
            cin>>s[i];
        }

        int count = 0;
        for(int i = 0; i<n; i++)
        {
            // if(s[i]&"1" == "1")
            // {
            //     count++;
            //     // cout<<count<<" ";
            //     // cout<<
            // }
            // cout<<s[i]<<" ";

        }
        // cout<<count<<"\n";
        cout<<s[1];
    }
    return 0;
}
