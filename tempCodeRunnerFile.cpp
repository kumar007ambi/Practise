#include <iostream>

// using namespace std;

// int main()

// {

//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {

//         int m, n;

//         cin >> m >> n;

//         char A[m][n];

//         for (int i = 0; i < m; i++)
//         {

//             for (int j = 0; j < n; j++)
//             {

//                 cin >> A[i][j];
//             }
//         }

//         int max = 0;

//         for (int i = 0; i < m; i++)
//         {

//             int count = 0;

//             for (int j = 0; j < n; j++)
//             {

//                 if (A[i][j] == '#')
//                 {

//                     count++;
//                 }
//             }

//             if (count > max)
//             {
//                 max = count;
//             }
//         }

//         cout << max << endl;
//     }
// }