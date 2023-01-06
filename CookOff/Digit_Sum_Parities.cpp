#include <iostream>
using namespace std;

int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int oddOrEven(int sum)
{
    if (sum % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum_n;

        int m = n + 1;
        while ((oddOrEven(digitSum(m)) == oddOrEven(digitSum(n)))
        {
            m++;
        }
        cout << m << "\n";
    }
    return 0;
}
