#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; // string variable
    getline(cin, str); // get entire line as input
    map<char, int> mp; // map to count frequency of each character in given string
    for(auto ch : str) // iterate through each character in the string
    {
        if(ch != ' ') // skip spaces (remove this line to count spaces too)
        mp[ch]++; // increment count for each character
    }
    for(auto keysValue : mp) // traverse through the map
    {
        cout << keysValue.first << " : " << keysValue.second << endl; // use the first attribute for keys and second attribute for values
    }
}
