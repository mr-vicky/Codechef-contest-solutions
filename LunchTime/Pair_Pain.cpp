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
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }

        int count_1 = 0;
        int count_2 = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i] == 1)
                count_1++;
            if(a[i] == 2)
                count_2++;
        }

        if(count_1 == 0) 
        {
            cout<<count_1;
        }
        else{
            cout<<((count_1*(n-count_1)))+(count_2*(count_2-1)/2);
        }

        cout<<"\n";
    }
    return 0;
}
