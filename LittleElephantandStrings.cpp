#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
        int k, n;
        cin >> k >> n;
        vector<string> A(k);
        for (int i = 0; i < k; i++){
            cin >> A[i];
        }
        for (int l = 1; l <= n; l++)
        {
            string s;
            cin >> s;
            if ((int)s.size() >= 47)
            {
                cout << "Good" << endl;
                continue;
            }
            bool found = false;
            for (int j = 0; j < k; j++)
            {
                if (s.find(A[j]) != string::npos)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                cout << "Good" << endl;
            else
                cout << "Bad" << endl;
        }
    return 0;
}
