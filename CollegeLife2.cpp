#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        int intro[s];
        for (int i = 0; i < s; i++)
            cin >> intro[i];
        long long int tot = 0;
        for (int i = 0; i < s; i++)
        {
            int ep;
            cin >> ep;
            for (int j = 0; j < ep; j++)
            {
                int dur;
                cin >> dur;
                if (j == 0)
                    tot += dur;
                else
                    tot += (dur - intro[i]);
            }
        }
        cout << tot << endl;
    }
    return 0;
}