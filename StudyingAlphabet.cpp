#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    int k;
    while (n--)
    {
        k = 0;
        string word;
        cin >> word;
        for (int i = 0; i < word.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (word[i] == s[j])
                {
                    k++;
                }
            }
        }
        if (k == word.size())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
