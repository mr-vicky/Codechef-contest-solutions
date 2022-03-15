#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a, b;
        cin >> x >> a >> b;

        int a_marks = a;
        int b_marks = b * 2;
        int res = a_marks + b_marks;

        if (res >= x)
        {
            cout << "Qualify"
                 << "\n";
        }
        else
        {
            cout << "NotQualify"
                 << "\n";
        }
    }
    return 0;
}
