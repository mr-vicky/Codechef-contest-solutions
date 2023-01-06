#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        ll res = ((n - 2) / 2) + 1; 
        cout << res * 3 << "\n";
    }
    return 0;
}
