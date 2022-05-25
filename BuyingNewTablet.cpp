#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long int b;
        cin >> b;
        int max = -1;
        long int h, w, p;
        while (n--)
        {
            cin >> h >> w >> p;
            int area = h * w;
            if (p <= b)
            {
                if (area > max)
                {
                    max = area;
                }
            }
        }
        if (max == -1)
            cout << "no tablet" << endl;
        else
            cout << max << endl;
    }
    return 0;
}