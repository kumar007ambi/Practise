#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        float s, answer;
        cin>>s;
        if (s < 1500)
        {
            answer = s + 0.1 * s + 0.9 * s;
        }
        else
        {
            answer = s + 500 + 0.98 * s;
        }
        printf("%0.2f\n", answer);
    }
    return 0;
}
