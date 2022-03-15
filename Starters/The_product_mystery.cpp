#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> b >> c;

        for (a = 1; a <= c; a++)
        {
            if ((a * b) % c == 0)
            {
                cout << a << endl;
                break;
            }
        }
    }
    return 0;
}
