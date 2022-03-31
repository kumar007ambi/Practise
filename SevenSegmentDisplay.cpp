#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
        while (t--) {
            string n, k = "";
            int s = 0;
            cin >> n;
            for (int i = 0; i < n.size(); i++){
                if (n[i] == '8')
                    s += 7;
                else if (n[i] == '0' || n[i] == '6' || n[i] == '9')
                    s += 6;
                else if (n[i] == '2' || n[i] == '3' || n[i] == '5')
                    s += 5;
                else if (n[i] == '4')
                    s += 4;
                else if (n[i] == '7')
                    s += 3;
                else if (n[i] == '1')
                    s += 2;
            }

            if (s % 2 == 0 && s != 2) // if even sticks available, form each digit requiring 2 sticks.
            {
                for (int i = 0; i < (s / 2); i++)
                    k += "1";
            }else if (s == 2)
                k = "1";
            else
                for (int i = 0; i < (s / 2); i++){
                    if (i == 0)
                        k += "7";
                    else
                        k += "1";
                }
            // if odd sticks, form first digit as largest digit that can be made by just one extra stick and thats 7
            cout << k << endl;
        }
}
