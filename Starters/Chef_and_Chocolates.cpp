#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, x, y;
        cin >> c >> x >> y;

        int rem_chockolate = c - x;
        y = y * rem_chockolate;
        cout << y << "\n";
    }
    return 0;
}
