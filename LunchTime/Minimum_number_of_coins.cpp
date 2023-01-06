#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int min_coins = 0;

        if (x % 5 == 0)
        {
            if (x % 10 == 5)
            {
                min_coins = (x / 10) + 1;
                cout << min_coins << "\n";
            }
            else if (x % 10 == 0)
            {
                min_coins = (x / 10);
                cout << min_coins << "\n";
            }
            else if (x % 5 == 0)
            {
                min_coins = (x / 5) + 1;
                cout << min_coins << "\n";
            }
        }
        else
        {
            cout << "-1"<< "\n";
        }
    }
    return 0;
}
