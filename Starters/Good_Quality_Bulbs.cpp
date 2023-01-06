#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum = sum + a[i];
        }

        int res = (n * x) - (sum);
        if (res < 0)
        {
            cout << "0"<< "\n";
        }
        else
        {
            cout << res << "\n";
        }
    }
    return 0;
}
