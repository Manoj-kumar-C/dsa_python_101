#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string str = "hello world";
    map<char, int> freq;

    // Count the frequency of each character
    for (char c : str) {
        freq[c]++;
    }

    // Print the frequency of each character
    for (auto it : freq) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}