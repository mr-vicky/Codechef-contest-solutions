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

        int total_money = x * 10 + y * 5;
        cout << total_money << "\n";
    }
    return 0;
}
