#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> numbers(n);
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
  }

  int max_efficiency = INT_MIN;
  for (int k = 1; k <= n; k++) {
    vector<int> priorities(k);
    for (int i = 0; i < k; i++) {
      priorities[i] = i + 1;
    }

    do {
      int efficiency = 0;
      for (int i = 0; i < k; i++) {
        efficiency += numbers[i] * priorities[i];
      }

      max_efficiency = max(max_efficiency, efficiency);
    } while (next_permutation(priorities.begin(), priorities.end()));
  }

  cout << max_efficiency << endl;

  return 0;
}