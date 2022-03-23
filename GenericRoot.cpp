//Generic root of a number
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int num, sum, r;
  cout << "Enter your number" << endl;
  cin >> num;
  while (num > 10)
  {
    sum = 0;
    while (num)
    {
      r = num % 10;
      num = num / 10;
      sum += r;
    }
    if (sum > 10)
      num = sum;
    else
      break;
  }
  cout << "The Generic root is " << sum;
  return 0;
}
