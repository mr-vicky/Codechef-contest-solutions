#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int d, n;
        cin >> d >> n;
        int count = 0;
        
        int arr[d];
        for(int i = 1; i<=d; i++)
        {
            n = n%10;
            cin>>arr[i];
            
            n = n/10;
        }

        // sort(arr, arr+d);

        for(int i = 1; i<=d; i++)
        {
            cout<<arr[i]<<" ";
            if(i == 5 || i == 0)
            {
                count++;
            }
        }

        if (count > 0)
        {
            cout << "Yes"<< "\n";
        }
        else
        {
            cout << "No"<< "\n";
        }
    }
    return 0;
}
