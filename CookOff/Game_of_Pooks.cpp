#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "1";
        }
        else if (n < 4)
        {
            cout << n - 1;
        }
        else
        {
            cout << n;
        }

        cout << "\n";
    }

    return 0;
}
