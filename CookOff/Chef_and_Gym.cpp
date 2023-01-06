#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int gym_trainer = x + y;

        if (gym_trainer <= z)
            cout << "2";
        else if (x <= z)
            cout << "1";
        else
            cout << "0";
        cout << "\n";
    }
    return 0;
}
