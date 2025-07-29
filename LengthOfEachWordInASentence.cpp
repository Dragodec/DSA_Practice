// program to print the individual length of each word in a sentence
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string  str; // declare the input string
    getline(cin, str); // get input using getline (we get the entire line as input unlike cin which only considers a single string)
    stringstream ss(str); // usage of string stream to extract each word from the input
    string word; // to get each word as string stream outputs
    cout << "Length of individual words from input" << endl;
    while(ss >> word)
    {
        cout << word << " : "<< word.length() << endl; // calculate and print the length (hello : 5)
    }

    // print only the last word and its length
    stringstream ss2(str); // need to reinitialize stringstream, since first string stream is now empty
    cout << "Last word" << endl;
    while(ss2 >> word) {}
    cout << word << " : " << word.length() << endl;

}
