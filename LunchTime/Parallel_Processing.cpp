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
        int arr[n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }

        int res = 0;

        for(int i = 0; i<n-1; i++)
        {
            for(int j = i+1; j<n; j++)
            {
                
                 res = min(arr[i], arr[j]);
            }
        }
        cout<<res<<endl;

    }
    return 0;
}
