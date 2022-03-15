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
            if (i % 2 != 0) // odd
            {
                a[i] = i;
            }
            else if (i % 2 == 0) // even
            {
                a[i] = a[i - 1] * 2;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}
