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

        int dispo = x * 100;
        int cloth = y * 10;
        if (cloth < dispo)
            cout << "Cloth";
        else if (cloth > dispo)
            cout << "Disposable";
        else
            cout << "Cloth";
        cout << "\n";
    }
    return 0;
}
