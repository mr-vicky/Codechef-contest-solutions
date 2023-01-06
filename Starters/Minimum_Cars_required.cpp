#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        cout << ceil(n / 4) << "\n";
    }
    return 0;
}
