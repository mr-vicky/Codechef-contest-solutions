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

        int age[n];
        for (int i = 0; i < n; i++)
        {
            cin >> age[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (age[i] >= 10 && age[i] <= 60)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
