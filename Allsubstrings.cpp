#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
    // Pick starting point
    for (int len = 1; len <= input.size(); len++)
    {   
        // Pick ending point
        for (int i = 0; i <= input.size() - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point. 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                cout << input[k];
             
            cout << endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}