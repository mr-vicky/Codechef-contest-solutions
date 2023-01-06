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
        int max_bags = (x * y) / 100;
        cout << max_bags << "\n";
    }
    return 0;
}
