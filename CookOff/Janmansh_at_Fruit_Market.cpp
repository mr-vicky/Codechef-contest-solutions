#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b, c;
        cin >> x;

        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 3);

        int y = x - 1;
        int min_price = y * arr[0] + arr[1];
        cout << min_price << "\n";
    }
    return 0;
}
