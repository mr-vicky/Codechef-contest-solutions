#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int req_shoes = (n * 2) - m;

        if (m - n > 0)
        {
            cout << n << "\n";
        }
        else
        {
            cout << req_shoes << "\n";
        }
    }
    return 0;
}
