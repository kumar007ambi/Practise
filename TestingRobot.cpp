#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        set<int> l;
        l.insert(x);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                l.insert(x-1);
                x--;
            }
            else
            {
                l.insert(x+1);
                x++;
            }
        }
        
        cout << l.size() << endl;
    }
    return 0;
}