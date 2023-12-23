#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[8] = { 9, 4, 6, 7, 3, 1, 2, 8};
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

