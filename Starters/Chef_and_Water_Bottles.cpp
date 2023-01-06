#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        int filled_bottle = k / x;
        if (filled_bottle > n)
        {
            cout << n << "\n";
        }
        else
        {
            cout << filled_bottle << "\n";
        }
    }
    return 0;
}
