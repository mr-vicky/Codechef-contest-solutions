#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;

        float car1_prize = y1 / x1;
        float car2_prize = y2 / x2;

        if (car1_prize < car2_prize)
        {
            cout << "-1"
                 << "\n";
        }
        else if (car1_prize > car2_prize)
        {
            cout << "1"
                 << "\n";
        }
        else if (car1_prize == car2_prize)
        {
            cout << "0"
                 << "\n";
        }
    }
    return 0;
}
