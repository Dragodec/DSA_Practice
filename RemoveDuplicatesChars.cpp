#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; // string variable
    getline(cin, str); // getting emtire line as input 
    set<char> charSet; // declaring a set of char type to insert characters, set doesn't allow duplicates and removes it automatically
    for(char ch : str) // traversing through the string
    {
        charSet.insert(ch); // inserting into the set
    }
    cout << "Removed duplicate characters :" << endl;
    for(auto it = charSet.begin(); it != charSet.end(); it++) // we don't have random access iterators like we do in vectors and strings so use in-built iterators to traverse set
    {
        cout << *it << " "; // deference the value before printing using *
    }
}
