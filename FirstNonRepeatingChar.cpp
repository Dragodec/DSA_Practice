#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_map<char, int> freq;
    for (char ch : str) {
        if (ch != ' ')
            freq[ch]++;
    }

    for (char ch : str) {
        if (ch != ' ' && freq[ch] == 1) {
            cout << ch << endl;
            return 0;
        }
    }

    cout << "All characters are repeating" << endl;
    return 0;
}
