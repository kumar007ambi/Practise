#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector<ll>
const int N = 500023;

using namespace std;
int expefirstParity(int curr, vector<int> &B, int N)
{
    for (int i = 0; i < N; i++)
    {
        if (curr == 1 && B[i] == 1)
        {
            curr = 0;
        }
        else if (curr == 0 && B[i] == 1)
        {
            curr = 1;
        }
    }
    return curr;
}

void solution()
{
    int N;
    cin >> N;
    vector<int> B(N);
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    int first, first_exp;
    first = 1;
    first_exp = expefirstParity(1, B, N);
    if (first == first_exp)
    {
        cout << "YES\n";
        return;
    }
    first = 0;
    first_exp = expefirstParity(0, B, N);
    if (first == first_exp)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        ios_base::sync_with_stdio(false);
        cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solution();

    return 0;
}