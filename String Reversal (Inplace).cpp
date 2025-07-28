#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
  int first = 0, last = str.length()-1;
  while(first <= last)
    {
      swap(str[first], str[last]);
      first++;
      last--;
    }
  return str;
}

int main()
{
  string str;
  cout << "Enter a string : ";
  getline(cin, str);
  string reversed = reverseString(str);
  cout << "Reversed String : " << reversed;
}
