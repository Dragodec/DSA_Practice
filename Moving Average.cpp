#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter number of elements : ";
  cin >> n;
  vector<int> vec(n);
  for(int i = 1; i <= n; i++)
    {
      cout << "Enter element " << i << " : ";
      cin >> vec[i];
    }
  float sum = 0;
  for(int i = 1; i <= n; i++)
    {
      float avg = 0;
      sum += vec[i];
      avg = sum / i;
      cout << fixed << setprecision(2) << avg << " ";
    }
  return 0;
}
