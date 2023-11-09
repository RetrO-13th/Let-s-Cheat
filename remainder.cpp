#include <iostream>

using namespace std;

int my_remainder(int a, int b)
{
    if ((a % 3 == 0 && b % 3 == 1) || (a % 3 == 0 && b % 3 == 0) || (a % 3 == 0 && b % 3 == 2))
        return 0;
    if ((a % 3 == 1 && b % 3 == 0) || (a % 3 == 1 && b % 3 == 1) || (a % 3 == 1 && b % 3 == 2) || (a % 3 == 2 && b % 3 == 0))
        return 1;
    if (a % 3 == 2 && b % 3 == 1)
    {
        if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 == 0))
            return 1;

        return 2;
    }
    if (a % 3 == 2 && b % 3 == 2)
    {
        if ((a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 0))
            return 1;

        return 2;
    }

    return 0;
}

int main()
{

    int a, b;
    cin >> a >> b;

    int ans = my_remainder(a, b);
    cout << ans;

    return 0;
}
