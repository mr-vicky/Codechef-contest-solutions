#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }

        sort(a, a+n);
        int small = a[1];
        int big = a[n-1];
        
        if(n<=k-1)
        {
            cout<<big<<"\n";
        }
        else
        {
            cout<<a[3]<<"\n";
        }
    }
    return 0;
}
