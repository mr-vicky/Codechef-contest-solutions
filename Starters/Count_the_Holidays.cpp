#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int fest[n];
        for (int i = 0; i < n; i++)
        {
            cin >> fest[i];
        }

        // int sat_and_sun[8] = {6, 7, 13, 14, 20, 21, 27, 28};

        int count = 8;
        for (int i = 0; i < n; i++)
        {
            if (fest[i] != 6 && fest[i] != 7 && fest[i] != 13 && fest[i] != 14 &&
                fest[i] != 20 && fest[i] != 21 && fest[i] != 27 && fest[i] != 28)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
