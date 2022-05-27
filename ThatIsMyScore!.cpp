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
        vector<int> maxx_marks(12, 0);
        for (int i = 0; i < n; i++)
        {
            int s, m;
            cin >> s >> m;
            maxx_marks[s] = max(maxx_marks[s], m);
        }
        int score = 0;
        for (int i = 1; i <= 8; i++)
        {
            score = score + maxx_marks[i];
        }
        cout << score << endl;
    }
    return 0;
}