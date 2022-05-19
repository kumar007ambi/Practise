#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int len = str.length();

        int left[26] = {0};
        int right[26] = {0};

        for (int i = 0; i < (len / 2); i++)
        {
            int index1 = str[i] - 'a';
            left[index1]++;
        }

        for (int i = (len + 1) / 2; i < len; i++)
        {
            int index2 = str[i] - 'a';
            right[index2]++;
        }

        int x = 0;
        for (int i = 0; i < 26; i++)
        {
            if (left[i] != right[i])
            {
                x = 1;
            }
        }

        if (x == 0)
        {
            cout << "YES" << endl;
        }
        else if (x == 1)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
