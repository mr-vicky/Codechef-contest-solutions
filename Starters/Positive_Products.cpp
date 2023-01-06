#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int count = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = 1; j <= n; j++)
        //     {
        //         if ((a[i] * a[j] > 0) && i != j)
        //           {
        //             count++;
        //         }
        //     }
        // }

        cout << count / 2 << "\n";
    }
    return 0;
}
