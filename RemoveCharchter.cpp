#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here
    // string s = "";
    // input = input + ' ';
    // // cout<<"input "<<input<<clsendl;
    // int n = input.size();
    // for (int i = 0; i < n; i++)
    // {
    //    if(input[i] == c){
    //        s = s + "";
    //    }else{
    //        s = input[i] + s;
    //    }
    // }
    // return s;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == c)
        {
            input.erase(input.begin() + i);
            i--;
        }
    }
    return input;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}