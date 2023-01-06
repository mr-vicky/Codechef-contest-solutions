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

        int item = 0;
        for (int i = 1; i <= n; i++)
        {
            item = i + (i / 2);
            if (n <= item)
            {
                cout << i * x << "\n";
                break;
            }
        }
    }
    return 0;
}
