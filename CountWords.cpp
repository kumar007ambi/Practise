#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
    // Write your code 
   int count = 0;
   for (int i = 0; input[i] != '\0';i++)
    {
        if (input[i] == ' ')
            count++;    
    }
    return count + 1;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}