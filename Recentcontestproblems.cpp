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
        int st = 0, lt = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;         
            if (s == "START38")
            {
                st+=1;
            }
            else if (s == "LTIME108")
            {
                lt+=1;
            }
        }
        cout << st << " " << lt << endl;
    }
    return 0;
}
