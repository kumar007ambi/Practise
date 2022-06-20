#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, x_floor = 0, y_floor = 0;
        cin >> x >> y;

        if (x % 10 == 0)
        {
            x_floor = x / 10;
        }
        else
        {
            x_floor = (x / 10) + 1;
        }

        if (y % 10 == 0)
        {
            y_floor = y / 10;
        }
        else
        {
            y_floor = (y / 10) + 1;
        }

        if (x_floor > y_floor)
        {
            cout << x_floor - y_floor << endl;
        }
        else
        {
            cout << y_floor - x_floor << endl;
        }
    }
    return 0;
}
