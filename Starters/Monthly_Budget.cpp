#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int money_spent = y * 30;

        if (x >= money_spent)
        {
            cout << "YES"<< "\n";
        }
        else
        {
            cout << "NO"<< "\n";
        }
    }
    return 0;
}
