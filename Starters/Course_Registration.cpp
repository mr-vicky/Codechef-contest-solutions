#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int seat_left = m - k;

        if (seat_left >= n)
        {
            cout << "Yes"<< "\n";
        }
        else
        {
            cout << "No"<< "\n";
        }
    }
    return 0;
}
